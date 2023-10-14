/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:38:39 by timartin          #+#    #+#             */
/*   Updated: 2023/10/14 16:38:40 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T *array, int len, void (*func)(T&))
{
    for (int i = 0; i < len; i++)
        func(array[i]);
}

template <typename T>
void    printArray(T &print)
{
    std::cout << print << std::endl;
}

#endif
