#ifndef PARSE_UTILS_CPP
# define PARSE_UTILS_CPP

# include <iostream>

void    removeAllSpaces(std::string& str);
void    removeSpaces(std::string& str);
int checkAfterFirstWord(std::string& str);
std::string checkIfPseudo(std::string& str);
std::string numberParse(std::string& str);
std::string charParse(std::string& str);
std::string checkIfInt(std::string& str);
std::string parseDecimal(std::string& str);

#endif