#ifndef SCALAR_CONVERTER_H
# define SCALAR_CONVERTER_H

# include <iostream>
# include <cstdlib>
# include "ParseUtils.hpp"

class ScalarConverter
{
private:
    std::string _types[4];
    std::string _str;
public:
    ScalarConverter(void);
    ScalarConverter(std::string str);
    ScalarConverter(ScalarConverter const &copy);
    ~ScalarConverter(void);

    ScalarConverter &operator=(ScalarConverter const &copy);

    void    convert(std::string str);
    std::string getType(std::string& str);

    void    convertChar(std::string str);
    void    convertInt(std::string str);
    void    convertFloat(std::string str);
    void    convertDouble(std::string str);
};

#endif