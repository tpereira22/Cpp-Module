#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <cstdlib>
# include <sys/time.h>

# define RED "\033[1m\033[31m"
# define YELLOW "\033[33m"
# define GREEN "\033[1;32m"
# define BLUE "\e[1;34m"
# define RESET "\033[0m"

class PmergeMe
{
private:
    PmergeMe();
    PmergeMe(const PmergeMe &copy);
    ~PmergeMe();
    
    const PmergeMe &operator=(const PmergeMe &copy);

    static int checkInvalidFormat(size_t size, char **numbers);
    
    static void makeVector(std::vector<int> &numVec, char **numbers, int size);
    static void makeList(std::list<int> &numList, char **numbers, int size);
    
    static void sortVector(std::vector<int> &numVec, int begin, int end);
    static void mergeSortVec(std::vector<int> &numVec, int begin, int mid, int end);

    static void sortList(std::list<int> &numList, std::list<int>::iterator begin, std::list<int>::iterator end);
    static void mergeSortList(std::list<int> &numList, std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end);

    static void splitBySpace(std::vector<int> &numVec, char *numbers);
    static void splitBySpace(std::list<int> &numList, char *numbers);

public:
    static void callAlgo(int size, char **numbers);
    static void printMsg(std::string errorMsg, int logLevel);
};

#endif