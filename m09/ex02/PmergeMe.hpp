#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

# include <iostream>
# include <vector>
# include <list>

class PmergeMe
{
private:
    PmergeMe();
    PmergeMe(const PmergeMe &copy);
    ~PmergeMe();
    
    const PmergeMe &operator=(const PmergeMe &copy);

    static void makeVector(std::vector<int> &numVec, char **numbers);
    static void makeList(std::list<int> &numList, char **numbers);
    static void sortVector(std::vector<int> &numVec);
    static void sortList(std::list<int> &numList);
    static int checkInvalidFormat(size_t size, char **numbers);

public:
    static void callAlgo(int size, char **numbers);
};

#endif