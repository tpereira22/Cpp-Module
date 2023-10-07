/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:06:34 by timartin          #+#    #+#             */
/*   Updated: 2023/10/06 15:06:35 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <limits>
# include <stdexcept>
# include <iomanip>

class ScalarConverter
{
private:
    ScalarConverter(void);
    ScalarConverter(ScalarConverter const &copy);
    ~ScalarConverter(void);
    ScalarConverter &operator=(ScalarConverter const &copy);

    static std::string getType(std::string& str);
    static void convertChar(std::string str);
    static void convertInt(std::string str);
    static void convertFloat(std::string str);
    static void convertDouble(std::string str);
    static int checkOutOfRange(std::string str);
    static void removeAllSpaces(std::string& str);
    static void removeSpaces(std::string& str);
    static int checkAfterFirstWord(std::string& str);
    static std::string checkIfPseudo(std::string& str);
    static std::string numberParse(std::string& str);
    static std::string charParse(std::string& str);
    static std::string checkIfInt(std::string& str);
    static std::string parseDecimal(std::string& str);
    static std::string checkFloat(std::string& str);
    static void printPseudo(std::string& str, std::string type);

public:
    static void convert(std::string str);
};

#endif
