#include "Span.hpp"

int main(void)
{
    Span    span(5);

    span.printSpan();
    try
    {
        std::cout << "Longest Span -> " << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    span.addNumber(9);
    span.printSpan();
    std::cout << std::endl;
    span.addNumber(6);
    span.printSpan();
    std::cout << std::endl;
    span.addNumber(7);
    span.addNumber(10);
    span.addNumber(30);
    span.printSpan();
    try
    {
        span.addNumber(15);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    span.printSpan();
    try
    {
        span.addNumber(15);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "Longest Span -> " << span.longestSpan() << std::endl;
}