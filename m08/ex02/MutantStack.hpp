#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <deque>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
public:
    typedef typename std::deque<T>::iterator iterator;
    MutantStack() {}

    MutantStack(const MutantStack& copy) :std::stack<T, std::deque<T> >(copy) {}

    ~MutantStack() {}
    
    MutantStack& operator=(const MutantStack& copy) 
    {
        if (this != &copy)
        {
            std::stack<T, std::deque<T> >::operator=(copy);
        }
        return *this;
    }

    iterator begin()
    {
        return this->c.begin();
    }
    
    iterator end()
    {
        return this->c.end();
    }
};


#endif