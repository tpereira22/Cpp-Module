#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
    _types[0] = "char";
    _types[1] = "int";
    _types[2] = "double";
    _types[3] = "float";
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
    this->_types[0] = "char";
    this->_types[1] = "int";
    this->_types[2] = "double";
    this->_types[3] = "float";
    *this = copy;
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy)
{
    this->_types[0] = "char";
    this->_types[1] = "int";
    this->_types[2] = "double";
    this->_types[3] = "float";
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
}

std::string ScalarConverter::getType(std::string& str)
{
    std::string type;
    if (checkAfterFirstWord(str))
        return "";
    removeAllSpaces(str);
    type = checkIfPseudo(str);
    if (type.compare("done") == 0)
        return "";
    if (std::isdigit(str[0]) || (str[0] == '-' && std::isdigit(str[1])))
        type = numberParse(str);
    else
        type = charParse(str);
    return type;
}

void    ScalarConverter::convertChar(std::string str)
{
    std::cout << "char: " << str << std::endl;
    std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
}

int ScalarConverter::checkOutOfRange(std::string str)
{
    long i = atol(str.c_str());
    if (i < std::numeric_limits<int>::max() && i > std::numeric_limits<int>::min())
        return (0);
    std::cout << "char: Impossible" << std::endl;
    std::cout << "int: Impossible" << std::endl;
    float f = atof(str.c_str());
    if (f > std::numeric_limits<float>::max() || f < std::numeric_limits<float>::min())
    {
        std::cout << "float: Impossible" << std::endl;
        std::cout << "double:Impossible" << std::endl;
    }
    else
    {
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << f << ".0" << std::endl;
    }
    return (1);
}

void    ScalarConverter::convertInt(std::string str)
{
    if (!checkOutOfRange(str))
    {
        long i = atol(str.c_str());
        if (isprint(static_cast<char>(i)))
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
}

void    ScalarConverter::convertDouble(std::string str)
{
    if (!checkOutOfRange(str))
    {
        double d = atof(str.c_str());
        if (isprint(static_cast<char>(d)))
            std::cout << "char: " << static_cast<char>(d) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        if (d == (double)atoi(str.c_str()))
        {
            std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
            std::cout << "double: " << d  << ".0" << std::endl;
        }
        else 
        {
            std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
            std::cout << "double: " << d  << std::endl;
        }
    }
}

void    ScalarConverter::convertFloat(std::string str)
{
    if (!checkOutOfRange(str))
    {
        float f = atof(str.c_str());
        if (isprint(static_cast<char>(f)))
            std::cout << "char: " << static_cast<char>(f) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(f) << std::endl;
        if (f == (float)atoi(str.c_str()))
        {
            std::cout << "float: " << f << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
        }
        else 
        {
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(f) << std::endl;
        }
    }
}
 