#include "PmergeMe.hpp"


PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    (void)copy;
}

PmergeMe::~PmergeMe() {}

const PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
    (void)copy;
    return *this;
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
                std::cout << "Error: Invalid characters" << std::endl;
                return 0;
            }
        }
    }
    return 1;
}

void PmergeMe::makeVector(std::vector<int> &numVec, char **numbers)
{

}

void PmergeMe::makeList(std::list<int> &numList, char **numbers)
{
    
}

void PmergeMe::sortVector(std::vector<int> &numVec)
{

}

void PmergeMe::sortList(std::list<int> &numList)
{
    
}

void PmergeMe::callAlgo(int size, char **numbers)
{
    std::vector<int> numVec;
    std::list<int> numList;

    if (!checkInvalidFormat(size, numbers))
        return ;
    makeVector(numVec, numbers);
    makeList(numList, numbers);
    sortVector(numVec);
    sortList(numList);

}
