#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>

class BitcoinExchange
{
private:
    BitcoinExchange(void);
    ~BitcoinExchange(void);
    BitcoinExchange(BitcoinExchange const &copy);
    BitcoinExchange &operator=(BitcoinExchange const &copy);

    static void checkInputFile(std::string filename);
    static std::map<std::string, std::string> getDatabase(void);

public:
    static void getBitcoinValues(std::string const filename);

};

#endif