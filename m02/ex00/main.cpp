/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:03:58 by timartin          #+#    #+#             */
/*   Updated: 2023/07/19 12:03:59 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	{
		Fixed   a;
		Fixed   b(a);
		Fixed   c;

		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	std::cout << std::endl;
	{
		Fixed   a;
		Fixed   b;

		a.setRawBits(10);
		std::cout << a.getRawBits() << std::endl;
		a.setRawBits(42);
		std::cout << a.getRawBits() << std::endl;
		b = a;
		a.setRawBits(24);
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
	}

	return 0;
}
