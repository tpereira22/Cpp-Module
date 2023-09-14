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
    std::cout << str << std::endl;

}


// maybe dont need all this ? 
void    convertChar()
{

}

void    convertInt()
{

}

void    convertFloat()
{

}

void    convertDouble()
{

}