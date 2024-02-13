#include "RPN.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error starting program !!" << std::endl;
        std::cout << "Usage -> ./RPN \" expression \" " << std::endl;
        return 1;
    }
    RPN::callRPN(av[1]);
}