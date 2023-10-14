/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:39:19 by timartin          #+#    #+#             */
/*   Updated: 2023/10/14 16:39:22 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    std::cout << "--------> Int Array <--------" << std::endl;  
    
    Array<int>   arrayInt(5);
    
    for (int i = 0; i < 5; i++)
        arrayInt[i] = i;
    for (int i = 0; i < 5; i++)
        std::cout << arrayInt[i] << std::endl; 
    std::cout << std::endl;   
    std::cout << "size -> " << arrayInt.size() << std::endl;
    std::cout << arrayInt[2] << std::endl;
    try // try print out of range
    {
        std::cout << arrayInt[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    std::cout << std::endl << "--------> String Array <--------" << std::endl;     
    
    Array<std::string>  arrayString(3);
    
    for (int i = 0; i < 3; i++)
        arrayString[i] = "Hey";
    for (int i = 0; i < 3; i++)
        std::cout << arrayString[i] << std::endl; 
    std::cout << std::endl;
    std::cout << "size -> " << arrayString.size() << std::endl;
    std::cout << arrayString[1] << std::endl;
    try
    {
        std::cout << arrayString[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl << "--------> Copy Array <--------" << std::endl;   

    Array<int>  copyArrayInt(arrayInt);

    for (int i = 0; i < 5; i++)
        copyArrayInt[i] = i;
    for (int i = 0; i < 5; i++)
        std::cout << copyArrayInt[i] << std::endl; 
    std::cout << std::endl;   
    std::cout << "size -> " << copyArrayInt.size() << std::endl;

    copyArrayInt[2] = 10; // change value on copy. should not change original
    std::cout << "Print Original" << std::endl; 
    for (int i = 0; i < 5; i++)
        std::cout << arrayInt[i] << std::endl; 
    std::cout << "Print Copy" << std::endl; 
    for (int i = 0; i < 5; i++)
        std::cout << copyArrayInt[i] << std::endl; 
    arrayInt = copyArrayInt; // copying the copy back to the original. Should delete the original before copy
    std::cout << "Print Original after copying" << std::endl; 
    for (int i = 0; i < 5; i++)
        std::cout << arrayInt[i] << std::endl; 
}
