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

    if (iDay == 0 || iMonth == 0 || iYear == 0)
        return 0;
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
    if (amount > 1000 || amount < 0)
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
                std::cout << "Error: Bad input => " << line << std::endl;
                return 0;
            }
        }
        if (line[i] == 46)
            dotCounter++;
        if ((!std::isdigit(line[i]) && line[i] != 46 && line[i] != 32) || dotCounter > 1)
        {
            std::cout << "Error: Bad input => " << line << std::endl;
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
            std::cout << "Error: Bad input => " << line << std::endl;
            return 0;
        }
        if (line[i] && line[i] != 32)
            std::cout << "Error: Bad input => " << line << std::endl;
    }
    firstNumber = line.find_first_of("0123456789", firstPipe);
    for (size_t i = firstPipe + 1; i < firstNumber; i++)
    {
        if (firstNumber == std::string::npos)
        {
            std::cout << "Error: Bad input => " << line << std::endl;
            return 0;
        }
        if (line[i] && line[i] != 32)
        {
            if (line[i] == 45 && std::isdigit(line[i + 1]))
            {
                std::cout << "Error: not a positive number." << std::endl;
                return 0;
            }
            std::cout << "Error: Bad input => " << line << std::endl;
            return 0;
        }
    }
    if (!checkIfValidNumber(line, firstNumber))
        return 0;
    return 1;
}

bool BitcoinExchange::checkFirstLine(std::string line)
{
    std::string lineNoSpaces;

    for (size_t i = 0; i < line.size(); i++)
    {
        if (line[i] == ' ')
            i++;
        if (line[i] && line[i] != ' ')
        {
            lineNoSpaces += line[i];
        }
    }

    if (lineNoSpaces.compare("date|value") == 0)
        return TRUE;
    return FALSE;
}

int *BitcoinExchange::getDateArray(std::string sDate)
{
    std::string year;
    std::string month;
    std::string day;

    size_t dash = sDate.find("-");
    year = sDate.substr(0, dash);
    size_t dash2 = sDate.find("-", dash + 1);
    dash2 = sDate.find("-", dash + 1);
    month = sDate.substr(dash + 1, dash2 - dash - 1);
    day = sDate.substr(sDate.find("-", dash2) + 1, sDate.find(" ") - dash2 - 1);

    int iYear;
    int iMonth;
    int iDay;
    int *date = new int[3];

    iYear = std::atoi(year.c_str());
    iMonth = std::atoi(month.c_str());
    iDay = std::atoi(day.c_str());
    date[0] = iYear;
    date[1] = iMonth;
    date[2] = iDay;

    return date;
}

std::string BitcoinExchange::getDate(std::string line)
{
    std::string date;

    date = line.substr(0, line.find("|") - 1);
    if (date.find(" ") != std::string::npos)
        date.erase(date.find(" "));
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
    return amount;
}

float BitcoinExchange::yearNotFound(std::map<std::string, std::string> &database, int *fileDate, float amount)
{
    std::map<std::string, std::string>::reverse_iterator it = database.rbegin();
    
    int *dateArray = getDateArray(it->first);
    float bigValue = std::atof(it->second.c_str());
    int initialYear = 0;
    float databaseValue = 0;
    bool findFlag = false;
        
    if (fileDate[0] >= dateArray[0])
        databaseValue = bigValue * amount;
    else
    {
        for (; it != database.rend(); ++it)
        {
            initialYear = fileDate[0];
            delete []dateArray;
            dateArray = getDateArray(it->first);
            bigValue = std::atof(it->second.c_str());
            while (initialYear > 0)
            {
                if (initialYear == dateArray[0])
                {
                    databaseValue = std::atof(it->second.c_str()) * amount;
                    findFlag = true;
                    break ;
                }
                initialYear--;
            }
            if (findFlag)
                break ;
        }
    }

    if (dateArray)
        delete []dateArray;

    return databaseValue;
}

float BitcoinExchange::getBitcoinTotal(std::map<std::string, std::string> &database, int *fileDate, float amount)
{
    bool yearFlag = FALSE;
    bool monthFlag = FALSE;

    float databaseValue = 0;

    std::map<std::string, std::string>::reverse_iterator it;
    for (it = database.rbegin(); it != database.rend(); ++it)
    {
        int *databaseDate = getDateArray(it->first);
        if (fileDate[0] == databaseDate[0])
            yearFlag = TRUE;
        else
            yearFlag = FALSE;
        if (yearFlag && fileDate[1] == databaseDate[1])
            monthFlag = TRUE;
        if (yearFlag && monthFlag && fileDate[2] >= databaseDate[2])
        {
            databaseValue = std::atof(it->second.c_str()) * amount;
            delete[] databaseDate;
            break ;
        }
        delete[] databaseDate;
    }

    if (yearFlag == FALSE)
        databaseValue = yearNotFound(database, fileDate, amount);

    return databaseValue;
}

void BitcoinExchange::convertBitcoinValues(std::map<std::string, std::string> &database, std::string const filename)
{
    int firstLine = 0;
    std::ifstream file(filename.c_str());
    if (!checkInputFile(file, filename))
        return ;

    std::string line;
    while (getline(file, line))
    {
        firstLine++;
        if (firstLine == 1 && !checkFirstLine(line))
        {
            std::cout << "Error: Wrong file format" << std::endl;
            break ; 
        }
        else if (firstLine == 1)
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
}
