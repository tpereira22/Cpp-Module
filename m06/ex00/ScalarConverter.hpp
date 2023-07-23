#ifndef SCALAR_CONVERTER_H
# define SCALAR_CONVERTER_H

# include <iostream>

class ScalarConverter
{
private:

public:
    ScalarConverter(void);
    ScalarConverter(std::string str);
    ScalarConverter(ScalarConverter const &copy);
    ~ScalarConverter(void);

    ScalarConverter &operator=(ScalarConverter const &copy);

    void    convert(std::string str);
    std::string getType(std::string str);

    void    convertChar();
    void    convertInt();
    void    convertFloat();
    void    convertDouble();
};

#endif