#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    (void)copy;
}

const PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
    (void)copy;
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::printMsg(std::string errorMsg, int logLevel)
{
    switch (logLevel)
    {
    case 1:
        std::cerr << RED << "ERROR: " << YELLOW << errorMsg << RESET << std::endl;
        break;
    case 2:
        std::cout << BLUE << "INFO: " << YELLOW << errorMsg << RESET << std::endl;
        break;
    default:
        break;
    }
}

int PmergeMe::checkInvalidFormat(size_t size, char **numbers)
{
    for (size_t i = 1; i < size; i++)
    {
        std::string line = static_cast<std::string>(numbers[i]);
        for (size_t j = 0; j < line.size(); j++)
        {
            if (line.find_first_not_of("0123456789 ") != std::string::npos)
            {
                printMsg("Invalid character", 1);
                return 0;
            }
        }
    }
    return 1;
}

void PmergeMe::splitBySpace(std::vector<int> &numVec, char *numbers)
{
    std::string num;
    for (int i = 0; numbers[i] != '\0'; i++)
    {
        if (numbers[i] != ' ' && numbers[i] != '\0')
            num += numbers[i];
        else
        {
            if (!num.empty())
            {
                numVec.push_back(atoi(num.c_str()));
                num.clear();
            }
        }
    }
    if (!num.empty())
        numVec.push_back(atoi(num.c_str()));
}

void PmergeMe::splitBySpace(std::list<int> &numList, char *numbers)
{
    std::string num;
    for (int i = 0; numbers[i] != '\0'; i++)
    {
        if (numbers[i] != ' ' && numbers[i] != '\0')
            num += numbers[i];
        else
        {
            if (!num.empty())
            {
                numList.push_back(atoi(num.c_str()));
                num.clear();
            }
        }
    }
    if (!num.empty())
        numList.push_back(atoi(num.c_str()));
}

void PmergeMe::makeVector(std::vector<int> &numVec, char **numbers, int size)
{
    bool split = false;

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; numbers[i][j] != '\0'; j++)
        {
            if (numbers[i][j] == ' ')
            {
                split = true;
                splitBySpace(numVec, numbers[i]);
                break ;
            }
        }
        if (split)
            split = false;
        else
            numVec.push_back(std::atoi(numbers[i]));
    }
}

void PmergeMe::makeList(std::list<int> &numList, char **numbers, int size)
{
    bool split = false;

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; numbers[i][j] != '\0'; j++)
        {
            if (numbers[i][j] == ' ')
            {
                split = true;
                splitBySpace(numList, numbers[i]);
                break ;
            }
        }
        if (split)
            split = false;
        else
            numList.push_back(std::atoi(numbers[i]));
    } 
}

void PmergeMe::mergeSortVec(std::vector<int> &numVec, int begin, int mid, int end)
{
    int i1 = begin;
    int i2 = mid + 1;
    std::vector<int> tempVec;

    while (i1 <= mid && i2 <= end)
    {
        if (numVec[i1] <= numVec[i2])
        {
            tempVec.push_back(numVec[i1]);
            i1++;
        }
        else
        {
            tempVec.push_back(numVec[i2]);
            i2++;
        }
    }

    while (i1 <= mid)
        tempVec.push_back(numVec[i1++]);
    while (i2 <= end)
        tempVec.push_back(numVec[i2++]);

    int j = 0;
    for (int i = begin; i <= end; i++)
    {
        numVec[i] = tempVec[j++];
    }
}

void PmergeMe::sortVector(std::vector<int> &numVec, int begin, int end)
{
    int mid = begin + ((end - begin) / 2);

    if (end > begin)
    {
        sortVector(numVec, begin, mid);
        sortVector(numVec, mid + 1, end);
        mergeSortVec(numVec, begin, mid, end);
    }
}

void PmergeMe::mergeSortList(std::list<int> &numList, std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end)
{
    std::list<int>::iterator i1 = begin;
    std::list<int>::iterator i2 = mid;
    std::list<int> tempList;

    while (i1 != mid && i2 != end)
    {
        if (*i1 <= *i2)
        {
            tempList.push_back(*i1);
            i1++;
        }
        else
        {
            tempList.push_back(*i2);
            i2++;
        }
    }

    while (i1 != mid)
    {
        tempList.push_back(*i1);
        ++i1;
    }
    while (i2 != end)
    {
        tempList.push_back(*i2);
        ++i2;
    }

    std::list<int>::iterator j = tempList.begin();
    std::list<int>::iterator i = numList.begin();
    std::advance(i, std::distance(i, begin));
    for (j = tempList.begin(); j != tempList.end(); ++j)
    {
        *i = *j;
        i++;
    }
    tempList.clear();
}

void PmergeMe::sortList(std::list<int> &numList, std::list<int>::iterator begin, std::list<int>::iterator end)
{
    size_t midPos = std::distance(begin, end) / 2;
    std::list<int>::iterator midI = begin;

    if (midPos)
    {
        std::advance(midI, midPos);
        sortList(numList, begin, midI);
        sortList(numList, midI, end);
        mergeSortList(numList, begin, midI, end);
    }
}

void PmergeMe::callAlgo(int size, char **numbers)
{
    std::vector<int> numVec;
    std::list<int> numList;

    struct timeval	start, end;
    float time_ms = 0;

    if (!checkInvalidFormat(size, numbers))
        return ;
    makeVector(numVec, numbers, size);
    makeList(numList, numbers, size);

    std::cout << "Before: ";
    for (size_t i = 0; i < numVec.size(); i++)
    {
        if (i < 5)
            std::cout << numVec[i] << " ";
        else
        {
            std::cout << "[...]";
            break ;
        }
    }
    std::cout << std::endl;

    gettimeofday(&start, NULL);
    sortVector(numVec, 0, numVec.size() - 1);
    gettimeofday(&end, NULL);
	time_ms = static_cast<float>(static_cast<float>(end.tv_sec - start.tv_sec) * 1000 + static_cast<float>(end.tv_usec - start.tv_usec) / 1000);
    
    std::cout << "After: ";
    for (size_t i = 0; i < numVec.size(); i++)
    {
        if (i < 5)
            std::cout << numVec[i] << " ";
        else
        {
            std::cout << "[...]";
            break ;
        }
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << numVec.size() << " elements with std::vector : " << time_ms << " ms" << std::endl;
    
    std::list<int>::iterator beginL = numList.begin();
    std::list<int>::iterator endL = numList.end();
    gettimeofday(&start, NULL);
    sortList(numList, beginL, endL);
    gettimeofday(&end, NULL);
	time_ms = static_cast<float>(static_cast<float>(end.tv_sec - start.tv_sec) * 1000 + static_cast<float>(end.tv_usec - start.tv_usec) / 1000);
    std::cout << "Time to process a range of " << numList.size() << " elements with std::list : " << time_ms << " ms" << std::endl;
}
