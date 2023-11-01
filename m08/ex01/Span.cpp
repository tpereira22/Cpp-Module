/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:33:02 by timartin          #+#    #+#             */
/*   Updated: 2023/11/01 17:33:06 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _max(0) {}

Span::Span(unsigned int N) : _max(N)
{
    _spanVector.reserve(N);
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span::~Span(void) {}

Span    &Span::operator=(Span const &copy)
{
    if (!copy._spanVector.empty())
    {
        for (size_t i = 0; i < copy._spanVector.size(); i++)
        {
            this->_spanVector.push_back(copy._spanVector[i]); 
        }
    }
    return *this;
}

void    Span::addNumber(unsigned int num)
{
    if (_spanVector.size() < _max)
        _spanVector.push_back(num);
    else
        throw Span::SpanIsFullException();
}

void    Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; ++it)
    {
        if (_spanVector.size() < _max)
            _spanVector.push_back(*it);
        else
            throw Span::SpanIsFullException();
    }
}

int     Span::shortestSpan(void)
{
    if (_spanVector.size() < 2)
        throw Span::NotEnoughNumbersException();
    
    int shortSpan = -1;
    std::vector<int>::iterator it;
    std::vector<int>::iterator it2;
    for (it = _spanVector.begin(); it != _spanVector.end(); ++it)
    {
        for (it2 = it + 1; it2 != _spanVector.end(); ++it2)
        {
            if (*it > *it2)
            {
                if ((*it - *it2) < shortSpan || shortSpan < 0)
                    shortSpan = *it - *it2;
            }
            else
            {
                if ((*it2 - *it) < shortSpan || shortSpan < 0)
                    shortSpan = *it2 - *it;
            
            }
        }
    }
    return shortSpan;
}

int     Span::longestSpan(void)
{
    if (_spanVector.size() < 2)
        throw Span::NotEnoughNumbersException();

    std::vector<int>::iterator it;
    it = std::min_element(_spanVector.begin(), _spanVector.end());
    int minValue = *it;
    it = std::max_element(_spanVector.begin(), _spanVector.end());
    int maxValue = *it;
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
    std::vector<int>::iterator it;
    for (it = _spanVector.begin(); it != _spanVector.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}
