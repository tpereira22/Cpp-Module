/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:12:49 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 16:12:51 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

Contacts::Contacts(void)
{

}

Contacts::~Contacts(void)
{

}

void    Contacts::set_first_name(std::string str)
{
	this->_first_name = str;
}

void	Contacts::set_last_name(std::string str)
{
	this->_last_name = str;
}

void	Contacts::set_nickname(std::string str)
{
	this->_nickname = str;
}

void	Contacts::set_number(std::string str)
{
	this->_number = str;
}

void	Contacts::set_dark_secret(std::string str)
{
	this->_dark_secret = str;
}

std::string	Contacts::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contacts::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contacts::get_nickname(void)
{
	return (this->_nickname);
}

std::string	Contacts::get_number(void)
{
	return (this->_number);
}

std::string	Contacts::get_dark_secret(void)
{
	return (this->_dark_secret);
}

void    Contacts::print_contact(void)
{
	std::cout << "\nContact Info" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Number: " << this->_number << std::endl;
	std::cout << "Dark Secret: " << this->_dark_secret << std::endl;
}
