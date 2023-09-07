#include "PresidentialPardonForm.hpp"

PPF::PPF(void) : AForm("Default Form", 150, 150) {}

PPF::PPF(std::string const target)
    : AForm("Presidential Pardon Form", 25, 5)
{
    this->_target = target;
}

PPF::PPF(PPF const &copy)
{
    *this = copy;
}

PPF::~PPF(void) {}

PPF &PPF::operator=(PPF const &copy)
{
    this->_target = copy._target;
    return *this;
}

void    PPF::execute(Bureaucrat const &executor) const
{
    if (checkExec(executor))
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}