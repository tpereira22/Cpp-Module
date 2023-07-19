/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:35:05 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 19:35:06 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string     stringVAR = "HI THIS IS _brain";
	std::string     *stringPTR = &stringVAR;
	std::string     &stringREF = stringVAR;

	std::cout << "Memory adress of stringVAR : " << &stringVAR << std::endl;
	std::cout << "Memory adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory adress held by stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Memory adress of stringPTR : " << &stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << "value of stringVAR : " << stringVAR << std::endl;
	std::cout << "value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "value of stringREF : " << stringREF << std::endl;

}
