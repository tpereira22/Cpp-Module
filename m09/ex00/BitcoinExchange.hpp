#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <cctype>
# include <limits>
# include <cstdlib>
# include <map>

# define TRUE 1
# define FALSE 0

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
    static int checkIfDateExist(std::string year, std::string month, std::string day, int *date);
    static int checkIntMax(std::string line, size_t firstNumber);
    static int checkIfValidNumber(std::string line, size_t firstNumber);
    static int checkDateFormat(std::string line, int *date);
    static int checkLineFormat(std::string line);
    static int *getDateArray(std::string date);
    static std::string getDate(std::string line);
    static std::string getAmount(std::string line);
    static float getBitcoinTotal(std::map<std::string, std::string> &database, int *fileDate, float amount);
    static void convertBitcoinValues(std::map<std::string, std::string> &database, std::string const filename);
    static void getDatabase(std::map<std::string, std::string> &database);

public:
    static void getBitcoinValues(std::string const filename);

};

#endif