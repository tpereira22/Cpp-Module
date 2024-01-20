#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
    (void)copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
    (void)copy;
    return *this;
}

void BitcoinExchange::getBitcoinValues(std::string const filename)
{
    std::map<std::string, std::string> database;

    database = getDatabase();
    checkInputFile(filename);
}

std::map<std::string, std::string> getDatabase(void)
{
    
}

void BitcoinExchange::checkInputFile(std::string filename)
{
    std::ifstream file(filename.c_str());
    if (file.is_open())
    {
        std::cout << filename << " file exists" << std::endl;
    }
    else
    {
        std::cout << "Error: " << filename << " file does not exist." << std::endl;
    }

}