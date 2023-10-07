/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:07:14 by timartin          #+#    #+#             */
/*   Updated: 2023/10/06 15:07:19 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
    Data *data = new Data();
    data->str = "yeyey";
    data->num = 42;
    
    std::cout << "---> Original Data Ptr <---" << std::endl;
    std::cout << "data -> " << data << std::endl;
    std::cout << "data.str -> " << data->str << std::endl;
    std::cout << "data.num -> " << data->num << std::endl << std::endl;
    

    uintptr_t ptrValue = Serializer::serialize(data);

    std::cout << "--> Int Ptr Conversion <---" << std::endl;
    std::cout << "ptr -> " << ptrValue << std::endl << std::endl;

    Data* test;

    test = Serializer::deserialize(ptrValue);
    
    std::cout << "--> Desirialized Data Ptr <---" << std::endl;
    std::cout << "test -> " << test << std::endl;
    std::cout << "test.str -> " << test->str << std::endl;
    std::cout << "test.num -> " << test->num << std::endl << std::endl;
    
    std::cout << "--> Original Data Ptr <---" << std::endl;
    std::cout << "data -> " << data << std::endl;
    std::cout << "data.str -> " << data->str << std::endl;
    std::cout << "data.num -> " << data->num << std::endl << std::endl;
    
    delete data;
}
