/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:38:24 by timartin          #+#    #+#             */
/*   Updated: 2023/10/14 16:38:26 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template <typename T>
void    swap(T &x, T &y)
{
    T   temp;
    temp = x;
    x = y;
    y = temp;
}

template <typename T>
T   &min(T &x, T &y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

template <typename T>
T   &max(T &x, T &y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

#endif
