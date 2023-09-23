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
    void (ScalarConverter::*ptr[])(std::string) = {
        &ScalarConverter::convertChar,
        &ScalarConverter::convertInt,
        &ScalarConverter::convertDouble,
        &ScalarConverter::convertFloat
    };
    for (int i = 0; i < 4; i++)
    {
        if (_types[i].compare(type) == 0)
        {
            (this->*ptr[i])(str);
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

void    ScalarConverter::convertChar(std::string str)
{
    std::cout << "char" << std::endl;

    int i = static_cast<int>(str[0]);
    double d = static_cast<double>(str[0]);
    float f = static_cast<float>(str[0]);

    std::cout << "char: " << str << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
}

void    ScalarConverter::convertInt(std::string str)
{
    std::cout << "int" << std::endl;
    
    int i = atoi(str.c_str());
    char c = static_cast<char>(i);
    double d = static_cast<double>(i);
    float f = static_cast<float>(i);

    if (c) //this dont work
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
}

void    ScalarConverter::convertDouble(std::string str)
{
    std::cout << "double" << std::endl;

    (void)str;
    std::cout << "char: " << std::endl;
    std::cout << "int: " << std::endl;
    std::cout << "double: " << std::endl;
    std::cout << "float: " << std::endl;
}

void    ScalarConverter::convertFloat(std::string str)
{
    std::cout << "float" << std::endl;

    (void)str;
    std::cout << "char: " << std::endl;
    std::cout << "int: " << std::endl;
    std::cout << "double: " << std::endl;
    std::cout << "float: " << std::endl;
}
