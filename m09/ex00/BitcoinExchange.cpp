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


int BitcoinExchange::checkInputFile(std::ifstream &file, std::string const filename)
{
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open " << filename << " file!" << std::endl;
        return 0;
    }
    return 1;
}

int BitcoinExchange::checkIfDigit(std::string date)
{
    for (size_t i = 0; i < date.size(); i++)
    {
        if (!std::isdigit(date[i]))
            return 0;
    }
    return 1;
}

int BitcoinExchange::checkIfDateExist(std::string month, std::string day)
{
    int iMonth;
    int iDay;

    iMonth = std::atoi(month.c_str());
    iDay = std::atoi(day.c_str());
    if (iMonth > 12)
        return 0;
    if (iMonth < 8 && (iMonth % 2 != 0) && iDay > 31)
    {
        return 0;
    }
    else if (iMonth < 8 && (iMonth % 2 == 0))
    {
        if (iMonth == 2)
        {
            if (iDay > 28)
            {} //handle fev ano bisexto
        }
        if (iDay > 30)
            return 0;
    }
    else if (iMonth > 7 && (iMonth % 2 != 0) && iDay > 30)
    {
        return 0;
    }
    else if (iMonth > 7 && (iMonth % 2 == 0) && iDay > 31)
    {
        return 0;
    }
    return 1;
}

int BitcoinExchange::checkDateFormat(std::string line)
{
    std::string year;
    std::string month;
    std::string day;

    size_t dash = line.find("-");
    year = line.substr(0, dash);
    size_t dash2 = line.find("-", dash + 1);
    dash2 = line.find("-", dash + 1);
    month = line.substr(dash + 1, dash2 - dash - 1);
    day = line.substr(line.find("-", dash2) + 1, line.find(" ") - dash2 - 1);
    

    if (year.size() != 4 || month.size() != 2 || day.size() != 2
        || !checkIfDigit(year)|| !checkIfDigit(month)|| !checkIfDigit(day)
        || !checkIfDateExist(month, day))
    {
        std::cout << "Error: Bad input => " << year << "-" << month << "-" << day << std::endl;
    }

    // std::cout << "year -> " << year << std::endl;
    // std::cout << "month -> " << month << std::endl;
    // std::cout << "day -> " << day << std::endl << std::endl;
    return 1;
}

int BitcoinExchange::checkIfValidLine(std::string line)
{
    // check date format
    if (!checkDateFormat(line))
        return 0;
    

    // std::cout << line << std::endl;
    return 1;
}

void BitcoinExchange::convertBitcoinValues(std::map<std::string, std::string> &database, std::string const filename)
{
    std::ifstream file(filename.c_str());
    if (!checkInputFile(file, filename))
        return ;

    std::string line;
    while (getline(file, line))
    {
        if (!line.compare("date | value"))
            continue ;
        if (checkIfValidLine(line))
        {
            // print date => nrBitcoin => TotalAmount
        }
        else
        {
            // print Error (diferent types of errors print them in checkifValidLine)
        }
    }
    (void)database;
    file.close();
}

void BitcoinExchange::getDatabase(std::map<std::string, std::string> &database)
{
    std::ifstream file("data.csv");
    if (!checkInputFile(file, "data.csv"))
        return ;

    std::string line;
    std::string date;
    std::string value;
    while (getline(file, line))
    {
        if (!line.compare("date,exchange_rate"))
            continue ;
        date = line.substr(0, line.find(","));
        value = line.substr(line.find(",") + 1, line.size());
        database[date] = value;
    }
    file.close();
}

void BitcoinExchange::getBitcoinValues(std::string const filename)
{
    std::map<std::string, std::string> database;

    getDatabase(database);
    if (database.empty())
        return ;
    convertBitcoinValues(database, filename);
    // std::map<std::string, std::string>::iterator it;
    // for (it = database.begin(); it != database.end(); ++it)
    // {
    //     std::cout << "date -> " << it->first << " | " << " value -> " << it->second << std::endl;
    // }
}
