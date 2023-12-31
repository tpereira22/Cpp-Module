/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:39:11 by timartin          #+#    #+#             */
/*   Updated: 2023/10/14 16:39:12 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T   *_array;
    unsigned int _size;
public:
    Array(void) : _array(new T[0]), _size(0)
    {

    }

    Array(unsigned int n) : _size(n)
    {
        _array = new T[n];
    }

    Array(Array const &copy) : _array(NULL), _size(0)
    {
        *this = copy;
    }

    ~Array(void)
    {
        delete[] _array;
    }

    Array   &operator=(Array const &copy)
    {
        this->_size = copy._size;
        if (this->_array != NULL)
            delete[] _array;
        this->_array = new T[this->_size];
        for (int i = 0; i < static_cast<int>(this->_size); i++)
            this->_array[i] = copy._array[i];
        return *this;
    }

    T &operator[](int index)
    {
        if (index < 0 || index >= static_cast<int>(_size))
        {
            throw std::out_of_range("Index out of bounds");
        }
        return _array[index];
    }

    unsigned int size(void) const
    {
        return _size;
    }
};

#endif
