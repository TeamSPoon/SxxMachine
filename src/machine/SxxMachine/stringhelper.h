#ifndef STRINGHELPER
#define STRINGHELPER

//----------------------------------------------------------------------------------------
//	Copyright © 2007 - 2018 Tangible Software Solutions Inc.
//	This class can be used by anyone provided that the copyright notice remains intact.
//
//	This class is used to replace some string methods, including
//	conversions to or from strings.
//----------------------------------------------------------------------------------------
#include <string>
#include <sstream>
#include <vector>
#include <exception>
#include <cctype>

class StringHelper
{
public:
	static std::string toLower(std::string source)
	{
		std::transform(source.begin(), source.end(), source.begin(), std::tolower);
		return source;
	}

	static std::string toUpper(std::string source)
	{
		std::transform(source.begin(), source.end(), source.begin(), std::toupper);
		return source;
	}

	static std::string trimStart(std::string source, const std::string &trimChars = " \t\n\r\v\f")
	{
		return source.erase(0, source.find_first_not_of(trimChars));
	}

	static std::string trimEnd(std::string source, const std::string &trimChars = " \t\n\r\v\f")
	{
		return source.erase(source.find_last_not_of(trimChars) + 1);
	}

	static std::string trim(std::string source, const std::string &trimChars = " \t\n\r\v\f")
	{
		return trimStart(trimEnd(source, trimChars), trimChars);
	}

	static std::string replace(std::string source, const std::string &find, const std::string &replace)
	{
		size_t pos = 0;
		while ((pos = source.find(find, pos)) != std::string::npos)
		{
			source.replace(pos, find.length(), replace);
			pos += replace.length();
		}
		return source;
	}

	static bool startsWith(const std::string &source, const std::string &value)
	{
		if (source.length() < value.length())
			return false;
		else
			return source.compare(0, value.length(), value) == 0;
	}

	static bool endsWith(const std::string &source, const std::string &value)
	{
		if (source.length() < value.length())
			return false;
		else
			return source.compare(source.length() - value.length(), value.length(), value) == 0;
	}

	static std::vector<std::string> split(const std::string &source, char delimiter)
	{
		std::vector<std::string> output;
		std::istringstream ss(source);
		std::string nextItem;

		while (std::getline(ss, nextItem, delimiter))
		{
			output.push_back(nextItem);
		}

		return output;
	}

	template<typename T>
	static std::string toString(const T &subject)
	{
		std::ostringstream ss;
		ss << subject;
		return ss.str();
	}

	template<typename T>
	static T fromString(const std::string &subject)
	{
		std::istringstream ss(subject);
		T target;
		ss >> target;
		return target;
	}

	template<typename T>
	static std::string formatSimple(const std::string &input, T arg1)
	{
		std::ostringstream ss;
		int lastFormatChar = -1;
		int percent = -1;
		while ((percent = input.find('%', percent + 1)) > -1)
		{
			if (percent + 1 < input.length())
			{
				if (input[percent + 1] == '%')
				{
					percent++;
					continue;
				}

				int formatEnd = -1;
				std::string index;
				for (int i = percent + 1; i < input.length(); i++)
				{
					if (input[i] == 's')
					{
						index = "1";
						formatEnd = i;
						break;
					}
					else if (input[i] == '$' && i + 1 < input.length() && input[i + 1] == 's')
					{
						index = input.substr(percent + 1, i - percent - 1);
						formatEnd = i + 1;
						break;
					}
					else if (!std::isdigit(input[i]))
						break;					
				}

				if (formatEnd > -1)
				{
					ss << input.substr(lastFormatChar + 1, percent - lastFormatChar - 1);
					lastFormatChar = formatEnd;

					if (index == "1")
						ss << arg1;
					else
						throw std::exception("Only simple positional format specifiers are handled by the 'formatSimple' helper method.");
				}
			}
		}

		if (lastFormatChar + 1 < input.length())
			ss << input.substr(lastFormatChar + 1);

		return ss.str();
	}

	template<typename T1, typename T2>
	static std::string formatSimple(const std::string &input, T1 arg1, T2 arg2)
	{
		std::ostringstream ss;
		int lastFormatChar = -1;
		int percent = -1;
		while ((percent = input.find('%', percent + 1)) > -1)
		{
			if (percent + 1 < input.length())
			{
				if (input[percent + 1] == '%')
				{
					percent++;
					continue;
				}

				int formatEnd = -1;
				std::string index;
				for (int i = percent + 1; i < input.length(); i++)
				{
					if (input[i] == 's')
					{
						index = "1";
						formatEnd = i;
						break;
					}
					else if (input[i] == '$' && i + 1 < input.length() && input[i + 1] == 's')
					{
						index = input.substr(percent + 1, i - percent - 1);
						formatEnd = i + 1;
						break;
					}
					else if (!std::isdigit(input[i]))
						break;					
				}

				if (formatEnd > -1)
				{
					ss << input.substr(lastFormatChar + 1, percent - lastFormatChar - 1);
					lastFormatChar = formatEnd;

					if (index == "1")
						ss << arg1;
					else if (index == "2")
						ss << arg2;
					else
						throw std::exception("Only simple positional format specifiers are handled by the 'formatSimple' helper method.");
				}
			}
		}

		if (lastFormatChar + 1 < input.length())
			ss << input.substr(lastFormatChar + 1);

		return ss.str();
	}

	template<typename T1, typename T2, typename T3>
	static std::string formatSimple(const std::string &input, T1 arg1, T2 arg2, T3 arg3)
	{
		std::ostringstream ss;
		int lastFormatChar = -1;
		int percent = -1;
		while ((percent = input.find('%', percent + 1)) > -1)
		{
			if (percent + 1 < input.length())
			{
				if (input[percent + 1] == '%')
				{
					percent++;
					continue;
				}

				int formatEnd = -1;
				std::string index;
				for (int i = percent + 1; i < input.length(); i++)
				{
					if (input[i] == 's')
					{
						index = "1";
						formatEnd = i;
						break;
					}
					else if (input[i] == '$' && i + 1 < input.length() && input[i + 1] == 's')
					{
						index = input.substr(percent + 1, i - percent - 1);
						formatEnd = i + 1;
						break;
					}
					else if (!std::isdigit(input[i]))
						break;					
				}

				if (formatEnd > -1)
				{
					ss << input.substr(lastFormatChar + 1, percent - lastFormatChar - 1);
					lastFormatChar = formatEnd;

					if (index == "1")
						ss << arg1;
					else if (index == "2")
						ss << arg2;
					else if (index == "3")
						ss << arg3;
					else
						throw std::exception("Only simple positional format specifiers are handled by the 'formatSimple' helper method.");
				}
			}
		}

		if (lastFormatChar + 1 < input.length())
			ss << input.substr(lastFormatChar + 1);

		return ss.str();
	}
};


#endif	//#ifndef STRINGHELPER
