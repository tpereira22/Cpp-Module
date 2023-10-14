/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:38:48 by timartin          #+#    #+#             */
/*   Updated: 2023/10/14 16:38:49 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
    int         arrayInt[5] = {3, 5, 1, 9, 6};
    char        arrayChar[7] = {'A', 'c', 'r', 'k', 's', 'e', 'c'};
    std::string arrayString[2] = {"Hello", "World!"};

    iter(arrayInt, 5, printArray);
    std::cout << std::endl;
    iter(arrayChar, 7, printArray);
    std::cout << std::endl;
    iter(arrayString, 2, printArray);
}
