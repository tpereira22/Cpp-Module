#include "Span.hpp"

Span::Span(void) : _max(0)
{

}

Span::Span(unsigned int N) : _max(N)
{
    _spanVector.reserve(N);
}

Span::Span(Span const &copy)
{

}

Span::~Span(void)
{

}

Span    &Span::operator=(Span const &copy)
{
    return *this;
}

void    Span::addNumber(unsigned int num)
{
    if (_spanVector.size() < _max)
        _spanVector.push_back(num);
    else
        throw Span::SpanIsFullException();
}

int     Span::shortestSpan(void)
{
    if (_spanVector.size() < 2)
        throw Span::NotEnoughNumbersException();
    
    int shortSpan = 0;
    std::vector<int>::iterator it;
    for (it = _spanVector.begin(); it != _spanVector.end(); it++)
    {

    }
    return 0;
}

int     Span::longestSpan(void)
{
    if (_spanVector.size() < 2)
        throw Span::NotEnoughNumbersException();
    
    int minValue = _spanVector[0];
    int maxValue = _spanVector[0];

    std::vector<int>::iterator  it;
    for (it = _spanVector.begin(); it != _spanVector.end(); it++)
    {
        if (minValue > *it)
            minValue = *it;
        if (maxValue < *it)
            maxValue = *it;
    }
    return (maxValue - minValue);
}

const char  *Span::SpanIsFullException::what() const throw()
{
    return "Span Is Full.";
}

const char  *Span::NotEnoughNumbersException::what() const throw()
{
    return "Not Enough Numbers.";
}

void    Span::printSpan(void) // test func
{
    for (int value : this->_spanVector)
        std::cout << value << std::endl;
}