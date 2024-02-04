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

int BitcoinExchange::checkIfLeapYear(int iYear, int iDay)
{
    if (iYear % 4 == 0)
    {
        if (iYear % 100 != 0)
        {
            if (iDay > 29)
                return 0;
        }
        else
        {
            if (iYear % 400 == 0)
            {
                if (iDay > 29)
                    return 0;
            }
            else
            {
                if (iDay > 28)
                    return 0;
            }
        }
    }
    else
    {
        if (iDay > 28)
            return 0;
    }
    return 1;
}

int BitcoinExchange::checkIfDateExist(std::string year, std::string month, std::string day, int *date)
{
    int iYear;
    int iMonth;
    int iDay;

    iYear = std::atoi(year.c_str());
    iMonth = std::atoi(month.c_str());
    iDay = std::atoi(day.c_str());
    date[0] = iYear;
    date[1] = iMonth;
    date[2] = iDay;

    if (iMonth > 12)
        return 0;
    if (iMonth == 2)
    {
        if (!checkIfLeapYear(iYear, iDay))
            return 0;
    }
    else
    {
        if ((iMonth < 8 && (iMonth % 2 != 0) && iDay > 31)
            || (iMonth < 8 && (iMonth % 2 == 0) && iDay > 30)
            || (iMonth > 7 && (iMonth % 2 != 0) && iDay > 30)
            || (iMonth > 7 && (iMonth % 2 == 0) && iDay > 31))
        {
            return 0;
        }
    }
    return 1;
}

int BitcoinExchange::checkDateFormat(std::string line, int *date)
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
        || !checkIfDateExist(year, month, day, date))
    {
        std::cout << "Error: Bad input => " << year << "-" << month << "-" << day << std::endl;
        return 0;
    }
    return 1;
}

int BitcoinExchange::checkIntMax(std::string line, size_t firstNumber)
{
    std::string sAmount;
    long amount;

    sAmount = line.substr(firstNumber, line.size());
    amount = atol(sAmount.c_str());
    if (amount > std::numeric_limits<int>::max())
    {
        std::cout << "Error: too large a number." << std::endl;
        return 0;
    }
    return 1;
}

int BitcoinExchange::checkIfValidNumber(std::string line, size_t firstNumber)
{
    int dotCounter = 0;

    for (size_t i = firstNumber; i < line.size(); i++)
    {
        if (line[i] == 32)
        {
            if (line.find_first_not_of(" ", i) != std::string::npos)
            {
                std::cout << "Error: found not space after number" << std::endl;
                return 0;
            }
        }
        if (line[i] == 46)
            dotCounter++;
        if ((!std::isdigit(line[i]) && line[i] != 46 && line[i] != 32) || dotCounter > 1)
        {
            std::cout << "Error: Bad input => " << "bad amount " << line << std::endl;
            return 0;
        }
    }
    if (!checkIntMax(line, firstNumber))
        return 0;
    return 1;
}

int BitcoinExchange::checkLineFormat(std::string line)
{
    size_t firstSpace;
    size_t firstPipe;
    size_t firstNumber;
    
    firstSpace = line.find(" ");
    firstPipe = line.find("|");
    for (size_t i = firstSpace; i < firstPipe; i++)
    {
        if (firstPipe == std::string::npos)
        {
            std::cout << "Error: Bad input => " << "no pipe " << line << std::endl;
            return 0;
        }
        if (line[i] && line[i] != 32)
            std::cout << "Error: Bad input => " << "transition error ->" << line << std::endl;
    }
    firstNumber = line.find_first_of("0123456789", firstPipe);
    for (size_t i = firstPipe + 1; i < firstNumber; i++)
    {
        if (firstNumber == std::string::npos)
        {
            std::cout << "Error: Bad input => " << "no number" << line << std::endl;
            return 0;
        }
        if (line[i] && line[i] != 32)
        {
            if (line[i] == 45 && std::isdigit(line[i + 1]))
            {
                std::cout << "Error: not a positive number." << std::endl;
                return 0;
            }
            std::cout << "Error: Bad input => " << "after transition error ->" << line << std::endl;
            return 0;
        }
    }
    if (!checkIfValidNumber(line, firstNumber))
        return 0;
    return 1;
}

std::string BitcoinExchange::getDate(std::string line)
{
    std::string date;

    date = line.substr(0, line.find("|") - 1);
    if (date.find(" ") != std::string::npos)
        date.erase(date.find(" "));
    // std::cout << "date -> " << date << "a" << std::endl;
    return date;
}

std::string BitcoinExchange::getAmount(std::string line)
{
    std::string amount;
    size_t firstNumber;

    firstNumber = line.find_first_of("0123456789", line.find("|"));
    amount = line.substr(firstNumber, line.size());
    if (amount.find(" ") != std::string::npos)
        amount.erase(amount.find(" "));
    // std::cout << "amount -> " << amount << "a" << std::endl;
    return amount;
}

float BitcoinExchange::getBitcoinTotal(std::map<std::string, std::string> &database, int *date, float amount)
{
    std::map<std::string, std::string>::iterator it;
    // TODO: getYear, getMonth, getDay functions
    // for (it = database.end(); it != database.begin(); ++it)
    // {
    //     int databseYear = atoi(it->first.c_str());
    //     if (date[0] > databseYear)

    // }
    std::cout << "amount -> " <<  amount << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << date[i] << "  ";
    }
    std::cout << std::endl;
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
        int *date = new int[3];
        if (checkDateFormat(line, date) && checkLineFormat(line))
        {
            std::string sDate = getDate(line);
            std::string amount = getAmount(line);
            float totalAmount = getBitcoinTotal(database, date, std::atof(amount.c_str()));
            std::cout << sDate << " => " << amount << " = " << totalAmount << std::endl;
        }
        delete[] date;
    }
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
