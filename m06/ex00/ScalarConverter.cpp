#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{

}

ScalarConverter::ScalarConverter(std::string str)
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
    *this = copy;
}

ScalarConverter::~ScalarConverter(void)
{

}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy)
{
    return *this;
}

void    ScalarConverter::convert(std::string str)
{
    std::string type = getType(str);

}

std::string ScalarConverter::getType(std::string str)
{
    if (str.empty())
        return "Unknow";
    for (char c : str)
    {
        if (std::isdigit(c))
            
    }
    
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