#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "\nWelcome to the phonebook !" << std::endl << std::endl;
    this->_index = 0;
    this->_index_flag = 0;
    this->_total = 0;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Phonebook closed !" << std::endl << std::endl;
}

void    Phonebook::add(void)
{
    std::string input;
    std::string check;

    if (this->_index == 8)
    {
        this->_index = 0;
        this->_index_flag = 1;
    }
    check = this->_contact[this->_index].get_first_name();
    if (!check.empty())
        std::cout << "Overwritting " << check << " " << this->_contact[this->_index].get_last_name() << " contact" << std::endl;
    std::cout << "\nNew Contact" << std::endl;
    std::cout << "---------------" << std::endl;
    while (input.empty())
    {
        std::cout << "First Name : ";
        std::getline(std::cin, input);
    }
    this->_contact[this->_index].set_first_name(input);
    input = "";
    while (input.empty())
    {
        std::cout << "Last Name : ";
        std::getline(std::cin, input);
    }
    this->_contact[this->_index].set_last_name(input);
    input = "";
    while (input.empty())
    {
        std::cout << "Nickname : ";
        std::getline(std::cin, input);
    }
    this->_contact[this->_index].set_nickname(input);
    input = "";
    while (input.empty())
    {
        std::cout << "Number : ";
        std::getline(std::cin, input);
    }
    this->_contact[this->_index].set_number(input);
    input = "";
    while (input.empty())
    {
        std::cout << "Dark Secret : ";
        std::getline(std::cin, input);
    }
    this->_contact[this->_index].set_dark_secret(input);
    input = "";
    _index++;
}

std::string  Phonebook::_check_size(std::string info)
{
    std::string str;
    int len;

    len = info.size();
    if (len <= 10)
    {
        while(len < 10)
        {
            str.append(" ");
            len++;
        }
        str.append(info);
    }
    else
    {
        str = info.substr(0, 9);
        str.append(".");
    }
    return (str);
}

void    Phonebook::_print_list(void)
{
    int i;
    std::string info;

    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    if (this->_index_flag == 1)
        this->_total = 8;
    else
        this->_total = this->_index;
    i = 0;
    while (i < this->_total)
    {
        std::cout << "|         " << i + 1 << "|";
        info = _check_size(this->_contact[i].get_first_name());
        std::cout << info << "|";
        info = _check_size(this->_contact[i].get_last_name());
        std::cout << info << "|";
        info = _check_size(this->_contact[i].get_nickname());
        std::cout << info << "|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
        i++;
    }
}

void    Phonebook::search(void)
{
    std::string contact_index;
    int index_nr;

    _print_list();
    if (this->_total == 0 && this->_index_flag == 0)
    {
        std::cout << "\nThe list is empty !" << std::endl;
        return ;
    }
    std::cout << std::endl << "Enter the index of the contact:" << std::endl;
    std::cout << ">";
    std::getline(std::cin, contact_index);
    index_nr = contact_index[0] - '0';
    while (contact_index.length() > 1 || (contact_index[0] <= '0' || index_nr > this->_total))
    {
        std::cout << "\nInvalid Index !" << std::endl;
        std::cout << ">";
        std::getline(std::cin, contact_index);
        index_nr = contact_index[0] - '0';
    }
    this->_contact[contact_index[0] - '0' - 1].print_contact(); 
}