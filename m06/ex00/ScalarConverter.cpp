#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
    _types[0] = "char";
    _types[1] = "int";
    _types[2] = "double";
    _types[3] = "float";
}

ScalarConverter::ScalarConverter(std::string str) : _str(str)
{
    _types[0] = "char";
    _types[1] = "int";
    _types[2] = "double";
    _types[3] = "float";
    
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
    // this->_str = copy._str;
    *this = copy;
}

ScalarConverter::~ScalarConverter(void)
{

}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy)
{
    this->_str = copy._str;
    return *this;
}

void    ScalarConverter::convert(std::string str)
{
    std::string type;
    removeSpaces(str);
    type = getType(str);
    if (type.compare("") == 0)
        return ;
    void (ScalarConverter::*ptr[])() = {
        &ScalarConverter::convertChar,
        &ScalarConverter::convertInt,
        &ScalarConverter::convertDouble,
        &ScalarConverter::convertFloat
    };
    for (int i = 0; i < 4; i++)
    {
        if (_types[i].compare(type) == 0)
        {
            (this->*ptr[i])();
            break ;
        }
    }
    // std::cout << "str -> " << str << " type -> " << type << std::endl;
}

std::string ScalarConverter::getType(std::string& str)
{
    std::string type;
    if (checkAfterFirstWord(str))
        return "";
    removeAllSpaces(str);
    type = checkIfPseudo(str);
    if (type.compare("float") == 0 || type.compare("double") == 0)
        return type;
    if (std::isdigit(str[0]) || (str[0] == '-' && std::isdigit(str[1])))
        type = numberParse(str);
    else
        type = charParse(str);
    return type;
}

// maybe dont need all this ? 
void    ScalarConverter::convertChar(void)
{
    std::cout << "char" << std::endl;
}

void    ScalarConverter::convertInt(void)
{
    std::cout << "int" << std::endl;
}

void    ScalarConverter::convertDouble(void)
{
    std::cout << "double" << std::endl;
}

void    ScalarConverter::convertFloat(void)
{
    std::cout << "float" << std::endl;
}
