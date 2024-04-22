#include "PmergeMe.hpp"

int main (int ac, char **av)
{
    if (ac < 2)
    {
        PmergeMe::printMsg("Not enough arguments", 1);
        return 1;
    }
    PmergeMe::callAlgo(ac, av);
}