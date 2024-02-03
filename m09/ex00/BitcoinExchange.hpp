#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <cctype>
# include <cstdlib>
# include <map>

class BitcoinExchange
{
private:
    BitcoinExchange(void);
    ~BitcoinExchange(void);
    BitcoinExchange(BitcoinExchange const &copy);
    BitcoinExchange &operator=(BitcoinExchange const &copy);

    static int checkInputFile(std::ifstream &file, std::string const filename);
    static int checkIfDigit(std::string date);
    static int checkIfLeapYear(int iYear, int iDay);
    static int checkIfDateExist(std::string year, std::string month, std::string day);
    static int checkDateFormat(std::string line);
    static int checkIfValidLine(std::string line);
    static void convertBitcoinValues(std::map<std::string, std::string> &database, std::string const filename);
    static void getDatabase(std::map<std::string, std::string> &database);

public:
    static void getBitcoinValues(std::string const filename);

};

#endif