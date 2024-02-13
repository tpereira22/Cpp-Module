#include "PmergeMe.hpp"

int main (int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error: Not enough arguments !!" << std::endl;
        return 1;
    }
    PmergeMe::callAlgo(ac, av);
}