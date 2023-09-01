#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctime>

int main(void)
{
    std::srand(static_cast<unsigned>(std::time(NULL)));

    std::cout << "-------> TEST ShrubberyCreationForm ------->" << std::endl;
    AForm   *form1 = new ShrubberyCreationForm("Tree"); 
    Bureaucrat  ze("Ze", 150);

    ze.executeForm(*form1);
    ze.signForm(*form1);
    ze.setGrade(140);
    ze.signForm(*form1);
    ze.executeForm(*form1);
    ze.setGrade(130);
    ze.executeForm(*form1);

    std::cout << std::endl << std::endl;

    std::cout << "-------> TEST RobotomyRequestForm ------->" << std::endl;
    AForm   *form2 = new RobotomyRequestForm("Robocop");

    ze.executeForm(*form2);
    ze.signForm(*form2);
    ze.setGrade(70);
    ze.signForm(*form2);
    ze.executeForm(*form2);
    ze.setGrade(40);
    ze.executeForm(*form2);

    std::cout << std::endl << std::endl;

    std::cout << "-------> TEST PresidentialPardonForm ------->" << std::endl;
    AForm   *form3 = new PresidentialPardonForm("Manel");

    ze.executeForm(*form3);
    ze.signForm(*form3);
    ze.setGrade(20);
    ze.signForm(*form3);
    ze.executeForm(*form3);
    ze.setGrade(3);
    ze.executeForm(*form3);

    std::cout << std::endl << std::endl;
    std::cout << *form1 << std::endl << *form2 << std::endl << *form3 << std::endl;

    delete form1;
    delete form2;
    delete form3;
}