#include "RPN.hpp"


RPN::RPN() {}

RPN::RPN(const RPN &copy)
{
    (void)copy;
}

RPN::~RPN() {}

const RPN &RPN::operator=(const RPN &copy) 
{
    (void)copy;
    return *this;
}

int RPN::checkExpFormat(std::string exp)
{
    if (exp.find_first_not_of("0123456789+-/* ") != std::string::npos)
    {
        std::cout << "Error: Invalid character" << std::endl;
        return 0;
    }
    for (size_t i = 0; i < exp.size(); i++)
    {
        if (exp[i] != 32 && exp[i + 1] != 32)
        {
            if (i + 1 == exp.size())
                break ;
            std::cout << "Error: Invalid format" << std::endl;
            return 0;
        }
    }
    return 1;
}

void RPN::checkFinalResult(std::stack<float> &numberStack)
{
    if (numberStack.size() == 1)
        std::cout << "result -> " << numberStack.top() << std::endl;
    else
    {
        std::cout << "More than one number left in the stack !" << std::endl;
        while (numberStack.size() > 0)
        {
            std::cout << "stack -> " << numberStack.top() << std::endl;
            numberStack.pop();
        }
    }
}

void RPN::doOperation(std::stack<float> &numberStack, char op)
{
    float num2 = numberStack.top();
    numberStack.pop();
    float num1 = numberStack.top();
    numberStack.pop();
    float newNum = 0;
    switch (op)
    {
        case '+':
            newNum = num1 + num2;
            break;
        
        case '-':
            newNum = num1 - num2;
            break;

        case '/':
            newNum = num1 / num2;
            break;

        case '*':
            newNum = num1 * num2;
            break;
        
        default:
            break;
    }
    numberStack.push(newNum);
}

void RPN::processExp(std::string exp)
{
    std::stack<float> numberStack;

    for (size_t i = 0; i < exp.size(); i++)
    {
        if (std::isdigit(exp[i]))
            numberStack.push(exp[i] - '0');
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '/' || exp[i] == '*')
        {
            if (numberStack.size() < 2)
            {
                std::cout << "Error: Not enough numbers in the stack for operation '" << exp[i] << "' !" << std::endl;
                return ;
            }
            doOperation(numberStack, exp[i]);
        }
    }
    checkFinalResult(numberStack);
}

void RPN::callRPN(std::string exp)
{
    if (!checkExpFormat(exp))
        return ;
    processExp(exp);
}