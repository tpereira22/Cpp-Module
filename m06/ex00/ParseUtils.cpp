#include "ParseUtils.hpp"

std::string charParse(std::string& str)
{
    if (str[1])
    {
        std::cout << "Bad Input " << std::endl;
        return "";
    }
    else
        return "char";
}

std::string checkFloat(std::string& str)
{
    std::string::iterator it;
    for (it = str.begin(); it != str.end(); ++it)
    {
        if (*it == 'f')
        {
            it++;
            if (it != str.end())
            {
                std::cout << "Bad Input" << std::endl;
                return "";
            }
            else
                return "float";
        }
    }
    return "double";
}

std::string parseDecimal(std::string& str)
{
    std::string type;
    std::string::iterator it;
    for (it = str.begin(); it != str.end(); ++it)
    {
        if (*it == '.')
        {
            it++;
            if (!std::isdigit(*it) || *it == 'f')
            {
                std::cout << "Bad Input" << std::endl;
                return "";
            }
        }
    }
    type = checkFloat(str);
    return type;
}

std::string checkIfInt(std::string& str)
{
    std::string::iterator it;
    for (it = str.begin(); it != str.end(); ++it)
    {
        if (*it == '-')
            it++;
        if (*it == 'f')
        {
            std::cout << "Bad Input" << std::endl;
            return "error";
        }
        if (!std::isdigit(*it))
            return "";
    }
    return "int";
}

std::string numberParse(std::string& str)
{
    std::string type;
    int dotCounter = 0;
    int floatCounter = 0;
    std::string::iterator it;
    for (it = str.begin(); it != str.end(); ++it)
    {
        if (*it == '.')
            dotCounter++;
        if (*it == 'f')
            floatCounter++;
        if (it == str.begin() && *it == '-')
            it++;
        else if (!std::isdigit(*it) && *it != '.' && *it != 'f')
        {
            std::cout << "Bad Input" << std::endl;
            return "";
        }
        if (dotCounter > 1 || floatCounter > 1)
        {
            std::cout << "Bad Input" << std::endl;
            return "";
        }
    }
    type = checkIfInt(str);
    if (type.compare("error") == 0)
        return "";
    else if (type.compare("") == 0)
        type = parseDecimal(str);
    return type;
}

void    printPseudo(std::string& str, std::string type)
{
    if (type.compare("float") == 0)
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        str.erase(str.size() - 1);
        std::cout << "double: " << str << std::endl;
    }
    else if (type.compare("double") == 0)
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
    }
}

std::string checkIfPseudo(std::string& str)
{
    if (str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0)
        printPseudo(str, "float");
    else if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0)
        printPseudo(str, "double");
    else
        return "";
    return "done";
}

int checkAfterFirstWord(std::string& str)
{
    std::string::iterator it;
    for (it = str.begin(); it != str.end(); ++it)
    {
        if (it + 1 != str.end() && *it == 32 && *(it + 1) != 32)
        {
            std::cout << "Bad Input" << std::endl;
            return 1;
        }
    }
    if (str.compare("") == 0)
    {
        std::cout << "Empty String" << std::endl;
        return 1;
    }
    return 0;
}

void    removeSpaces(std::string& str)
{
    std::string::iterator it;
    for (it = str.begin(); it != str.end();)
    {
        if (*it == 32)
            it = str.erase(it);
        else
            return ;
    }
}

void    removeAllSpaces(std::string& str)
{
    std::string::iterator it;
    for (it = str.begin(); it != str.end();)
    {
        if (*it == 32)
            it = str.erase(it);
        else
            it++;
    }
}