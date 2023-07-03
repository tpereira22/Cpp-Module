#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "contacts.hpp"

class Phonebook
{
private:
	Contacts	_contact[8];
	int	_index;
	int	_index_flag;
	int	_total;

	void	_print_list(void);
	std::string	_check_size(std::string info);

public:
    Phonebook(void);
    ~Phonebook(void);

	void	add(void);
	void	search(void);
};


#endif