/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:13:01 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 16:13:03 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
# define CONTACTS_H

# include <iostream>

class Contacts
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string	_number;
	std::string _dark_secret;

public:
	Contacts(void);
	~Contacts(void);

	void		set_first_name(std::string str);
	void		set_last_name(std::string str);
	void		set_nickname(std::string str);
	void		set_number(std::string str);
	void		set_dark_secret(std::string str);
	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_number(void);
	std::string get_dark_secret(void);
	void		print_contact(void);

};


#endif
