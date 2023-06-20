#include <iostream>
#include "phonebook.hpp"
#include "contacts.hpp"

int main()
{
    Phonebook   phone;
    std::string  input;

    while (1)
    {
        std::string input;

        std::cout << "---------------------------------------------" << std::endl;
        std::cout << "\nEnter a command (ADD, SEARCH or EXIT): " << std::endl;
        std::cout << ">";
        std::getline(std::cin, input);
        if (input == "ADD")
            phone.add();
        else if (input == "SEARCH")
            phone.search();
        else if (input == "EXIT")
            break;
        else
            std::cout << "Invalid Command !" << std::endl;
        std::cout << std::endl;
    }

}