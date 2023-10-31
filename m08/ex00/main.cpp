#include "EasyFind.hpp"

int main(void)
{
    std::vector<int>    vectorInt;
    vectorInt.push_back(2);
    vectorInt.push_back(6);
    vectorInt.push_back(9);
    vectorInt.push_back(4);
    vectorInt.push_back(1);
    vectorInt.push_back(6);
    try
    {
        std::cout << easyfind(vectorInt, 4) << std::endl;
        std::cout << easyfind(vectorInt, 6) << std::endl;
        std::cout << easyfind(vectorInt, 10) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Vector Error: " << e.what() << std::endl;
    }
    std::list<int>    listInt;
    listInt.push_back(2);
    listInt.push_back(6);
    listInt.push_back(9);
    listInt.push_back(4);
    listInt.push_back(1);
    try
    {
        std::cout << easyfind(listInt, 4) << std::endl;
        std::cout << easyfind(listInt, 6) << std::endl;
        std::cout << easyfind(listInt, 10) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "List Error: " << e.what() << std::endl;
    }
}