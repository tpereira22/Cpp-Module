/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:32:46 by timartin          #+#    #+#             */
/*   Updated: 2023/11/01 17:32:47 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    {
        std::cout << "----> ITERATOR RANGE TEST <----" << std::endl;
        Span span(10000);
        std::vector<int> vec;
        for (int i = 0; i < 10000; i++)
        {
            vec.push_back(i);
        }
        span.addNumbers(vec.begin(), vec.end());
        span.printSpan();
        try
        {
            span.addNumber(10);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        std::cout << std::endl << "----> SPAN TEST <----" << std::endl;
        Span    span(5);
        try
        {
            std::cout << "Longest Span -> " << span.longestSpan() << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Error: " << e.what() << std::endl;
        }
        span.addNumber(9);
        try
        {
            std::cout << "Shortest Span -> " << span.shortestSpan() << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Error: " << e.what() << std::endl;
        }
        span.addNumber(6);
        span.addNumber(7);
        span.addNumber(10);
        span.addNumber(30);
        try
        {
            span.addNumber(15);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        span.printSpan();
        std::cout << std::endl << "Print Spans: " << std::endl;
        std::cout << "Longest Span -> " << span.longestSpan() << std::endl;
        std::cout << "Shortest Span -> " << span.shortestSpan() << std::endl;
    }
    {
        std::cout << std::endl << "----> TEST COPY <---" << std::endl;
        Span span(5);
        span.addNumber(9);
        span.addNumber(6);
        span.addNumber(7);
        span.addNumber(10);
        span.addNumber(30);
        Span span2(span);
        Span span3 = span2;
        std::cout << "Span: " << std::endl;
        span.printSpan();
        std::cout << std::endl << "Span2: " << std::endl;
        span2.printSpan();
        std::cout << std::endl << "Span3: " << std::endl;
        span3.printSpan();
    }
    {
        std::cout << std::endl << "----> SUBJECT TEST <----" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
}
