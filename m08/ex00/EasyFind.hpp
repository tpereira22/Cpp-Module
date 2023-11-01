/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:32:08 by timartin          #+#    #+#             */
/*   Updated: 2023/11/01 17:32:10 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

template <typename T>
int &easyfind(T &cont, int num)
{
    typename T::iterator it;
    
    it = std::find(cont.begin(), cont.end(), num);
    if (it == cont.end())
        throw std::exception();
    return *it;
}

#endif
