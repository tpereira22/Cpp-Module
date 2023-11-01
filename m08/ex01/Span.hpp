/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:33:12 by timartin          #+#    #+#             */
/*   Updated: 2023/11/01 17:33:13 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
    unsigned int        _max;
    std::vector<int>    _spanVector;
    Span(void);
public:
    Span(unsigned int N);
    Span(Span const &copy);
    ~Span(void);

    Span    &operator=(Span const &copy);
    
    void    addNumber(unsigned int num);
    void    addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     shortestSpan(void);
    int     longestSpan(void);

    struct SpanIsFullException : public std::exception
    {
        virtual const char  *what() const throw();
    };

    struct NotEnoughNumbersException : public std::exception
    {
        virtual const char  *what() const throw();
    };
    
    
    void    printSpan(void); // test func
};

#endif
