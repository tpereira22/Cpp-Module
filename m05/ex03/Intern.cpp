#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &copy)
{
    *this = copy;
}

Intern::~Intern(void) {}

Intern  &Intern::operator=(Intern const &copy)
{
    return *this;
}

AForm   *Intern::makeShrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm   *Intern::makeRobotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm   *Intern::makePresidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}

using FormCreator = AForm* (*)(std::string);

AForm   *Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string all_forms[] = {
        "shrubbery request",
        "robotomy request",
        "presidential request"};
    AForm*   (Intern::*p_forms[])(std::string) = {
        &Intern::makeShrubbery,
        &Intern::makeRobotomy,
        &Intern::makePresidential};
        
    for (int i = 0; i < 3; i++)
    {
        if (all_forms[i].compare(formName) == 0)
        {
            std::cout << "Intern creates a " << formName << " form" << std::endl;
            return ((this->*p_forms[i])(formTarget));
        }
    }
    throw Intern::InternException();
}


const char *Intern::InternException::what() const throw()
{
    return ("Intern couldn't make form. File name does not exist !");
}