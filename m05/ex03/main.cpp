#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main(void)
{
    std::cout << "-------> TEST INTERN - FORM CREATION: shrubbery request ------->" << std::endl;
    try
    {
        Intern  namelessIntern;
        AForm*  form1;
        Bureaucrat  ze("Ze", 2);

        form1 = namelessIntern.makeForm("shrubbery request", "tree");
        ze.signForm(*form1);
        ze.executeForm(*form1);
        delete form1;

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-------> TEST INTERN - FORM CREATION: presidential request ------->" << std::endl;
    try
    {
        Intern  namelessIntern;
        AForm*  form1;
        Bureaucrat  ze("Ze", 2);

        form1 = namelessIntern.makeForm("presidential request", "Manel");
        ze.signForm(*form1);
        ze.executeForm(*form1);
        delete form1;

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-------> TEST INTERN - WRONG NAME FORM CREATION ------->" << std::endl;
    try
    {
        Intern  namelessIntern;
        AForm*  form1;
        Bureaucrat  ze("Ze", 2);

        form1 = namelessIntern.makeForm("wrong form", "tree");
        ze.signForm(*form1);
        ze.executeForm(*form1);
        delete form1;

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}