cmake_minimum_required(VERSION 2.8)

project(SxxMachine)

set(epimy_CXX_SRCS
	# Compile the Pegmatite source files directly into the program (rather than creating a separate library).
	src/machine/SxxMachine/Operation.cpp
	src/machine/SxxMachine/HeapChoice.cpp
	src/machine/SxxMachine/Term.cpp
	src/machine/SxxMachine/FrozenVar.cpp
	src/machine/SxxMachine/PredTable.cpp
	src/machine/SxxMachine/Const.cpp
	src/machine/SxxMachine/Real.cpp
	src/machine/SxxMachine/Int.cpp
	src/machine/SxxMachine/Data.cpp
	src/machine/SxxMachine/Continuation.cpp
	src/machine/SxxMachine/Fun.cpp
	src/machine/SxxMachine/Code.cpp
	src/machine/SxxMachine/Var.cpp
	src/machine/SxxMachine/Lexer.cpp
	src/machine/SxxMachine/Builtins.cpp
	src/machine/SxxMachine/Metaterm.cpp
	src/machine/SxxMachine/Prolog.cpp

)
set(LLVM_LIBS all)

# Define the EpiMy program that we will build.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
add_executable(SxxMachine ${epimy_CXX_SRCS})
# We're using Pegmatite in the RTTI mode.
add_definitions(-DUSE_RTTI=1)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -I../lib")

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	set(CLANG_FLAGS "-Wdeprecated -Wno-zero-length-array -Wno-unknown-attributes")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CLANG_FLAGS}")
else()
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
endif()

# Find the Boehm GC files for garbage collection.
include(FindPkgConfig)
pkg_check_modules(GC REQUIRED bdw-gc)
link_directories(${GC_LIBRARY_DIRS})
find_library(LIBGC gc-threaded PATHS "${GC_LIBRARY_DIRS}")
find_library(LIBGC gc-threaded PATHS "${GC_LIBRARY_DIRS}")
if(${LIBGC} STREQUAL "LIBGC-NOTFOUND")
	find_library(LIBGC gc PATHS GC_LIBRARY_DIRS)
endif()
if(${LIBGC} STREQUAL "LIBGC-NOTFOUND")
	message(ERROR "Unable to find Boehm GC library")
endif()

message(STATUS "Using Boehm GC library: ${LIBGC}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GC_CFLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GC_CFLAGS}")
include_directories(GC_INCLUDE_DIRS)

find_program(LLVM_CONFIG NAMES llvm-config DOC "Path to llvm-config utility")
if (${LLVM_CONFIG} STREQUAL "LLVM_CONFIG-NOTFOUND")
	message(SEND_ERROR "llvm-config not found, please manually set path with -DLLVM_CONFIG")
endif()
message(STATUS "Using llvm-config: ${LLVM_CONFIG}")

# Define LLVM version macros so that we can support multiple versions in the source.
exec_program(${LLVM_CONFIG} ARGS --version OUTPUT_VARIABLE LLVM_VER)
exec_program(${LLVM_CONFIG} ARGS --cxxflags OUTPUT_VARIABLE LLVM_CXXFLAGS)
exec_program(${LLVM_CONFIG} ARGS --libs ${LLVM_LIBS} OUTPUT_VARIABLE LLVM_LIBS_FLAGS)
exec_program(${LLVM_CONFIG} ARGS --ldflags OUTPUT_VARIABLE LLVM_LDFLAGS)
exec_program(${LLVM_CONFIG} ARGS --system-libs OUTPUT_VARIABLE LLVM_SYSTEMLIBS)
exec_program(${LLVM_CONFIG} ARGS --libdir OUTPUT_VARIABLE LLVM_LIBDIR)
exec_program(${LLVM_CONFIG} ARGS --bindir OUTPUT_VARIABLE LLVM_BINDIR)
string(REGEX REPLACE "([0-9]*).([0-9]*).*" "-DLLVM_MAJOR=\\1 -DLLVM_MINOR=\\2" LLVM_VERSION "${LLVM_VER}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${LLVM_CXXFLAGS} ${LLVM_VERSION}")
target_link_libraries(SxxMachine ${LLVM_LIBS_FLAGS})
# llvm-config only gained a --system-libs flag in 3.5
if(LLVM_VER VERSION_GREATER 3.4)
	target_link_libraries(SxxMachine ${LLVM_SYSTEMLIBS})
endif()
set(CMAKE_EXE_LINKER_FLAGS "${LLVM_LDFLAGS} ${LIBGC} ${CMAKE_EXE_LINKER_FLAGS} -Wl,-rpath,${LLVM_LIBDIR}")

# Make sure that we use the LLVM path as an rpath so that we can dynamically link to LLVM.  Don't let CMake specify its own rpath.
set(CMAKE_SKIP_RPATH true)

# Make sure that LLVM is able to find functions in the main executable.
SET_TARGET_PROPERTIES(SxxMachine PROPERTIES ENABLE_EXPORTS TRUE)