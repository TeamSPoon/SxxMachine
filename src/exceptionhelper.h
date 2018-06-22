#ifndef EXCEPTIONHELPER
#define EXCEPTIONHELPER

#include <exception>

class ClassNotFoundException : public std::exception
{
private:
    std::string msg;

public:
    ClassNotFoundException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class IllegalAccessException : public std::exception
{
private:
    std::string msg;

public:
    IllegalAccessException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class InstantiationException : public std::exception
{
private:
    std::string msg;

public:
    InstantiationException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};


#endif	//#ifndef EXCEPTIONHELPER
