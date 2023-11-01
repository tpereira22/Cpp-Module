/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:33:42 by timartin          #+#    #+#             */
/*   Updated: 2023/11/01 17:33:43 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
