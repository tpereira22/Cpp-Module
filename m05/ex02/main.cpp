#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    std::cout << "-------> TEST EXEC ALL FORMS ------->" << std::endl;
    try
    {
        AForm   *form1 = new ShrubberyCreationForm("Tree");
        AForm   *form2 = new RobotomyRequestForm("Robocop");
        AForm   *form3 = new PresidentialPardonForm("Manel");
        Bureaucrat  ze("Ze", 2);

        std::cout << std::endl;
        ze.signForm(*form1);
        ze.signForm(*form2);
        ze.signForm(*form3);
        std::cout << std::endl;
        ze.executeForm(*form1);
        ze.executeForm(*form2);
        ze.executeForm(*form3);
        
        std::cout << std::endl << std::endl;
        std::cout << *form1 << std::endl << *form2 << std::endl << *form3 << std::endl;

        delete form1;
        delete form2;
        delete form3;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-------> TEST EXEC FORM - NOT SIGNED ------->" << std::endl;
    try
    {
        PresidentialPardonForm form1("Manel");
        Bureaucrat  ze("Ze", 2);

        ze.executeForm(form1);
        std::cout << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-------> TEST EXEC FORM - EXEC GRADE TOO LOW ------->" << std::endl;
    try
    {
        RobotomyRequestForm form1("Cyborg");
        Bureaucrat  ze("Ze", 50);

        ze.signForm(form1);
        ze.executeForm(form1);
        std::cout << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

}