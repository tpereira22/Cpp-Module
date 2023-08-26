#include "EasyFind.hpp"

int main(void)
{
    std::vector<int>    vectorInt = {2, 6, 9, 4, 1, 6};
    try
    {
        int value = easyfind(vectorInt, 4);
        std::cout << "value: " << value << std::endl;
        value = easyfind(vectorInt, 3);
    }
    catch (std::exception &e)
    {
        std::cout << "Value Error: " << e.what() << std::endl;
    }
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
    std::array<int, 5>    arrayInt = {2, 6, 9, 4, 1};
    try
    {
        std::cout << easyfind(arrayInt, 4) << std::endl;
        std::cout << easyfind(arrayInt, 6) << std::endl;
        std::cout << easyfind(arrayInt, 10) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Array Error: " << e.what() << std::endl;
    }
    std::list<int>    listInt = {2, 6, 9, 4, 1};
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