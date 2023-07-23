#include "Iter.hpp"

int main(void)
{
    int         arrayInt[5] = {3, 5, 1, 9, 6};
    char        arrayChar[7] = {'A', 'c', 'r', 'k', 's', 'e', 'c'};
    std::string arrayString[2] = {"Hello", "World!"};

    iter(arrayInt, 5, printArray);
    std::cout << std::endl;
    iter(arrayChar, 7, printArray);
    std::cout << std::endl;
    iter(arrayString, 2, printArray);
}