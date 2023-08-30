#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
private:
    unsigned int        _max;
    std::vector<int>    _spanVector;
public:
    Span(void);
    Span(unsigned int N);
    Span(Span const &copy);
    ~Span(void);

    Span    &operator=(Span const &copy);
    
    void    addNumber(unsigned int num);
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