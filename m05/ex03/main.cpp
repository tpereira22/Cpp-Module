#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main(void)
{
    std::srand(static_cast<unsigned>(std::time(NULL)));
    
    std::cout << "-------> TEST INTERN ------->" << std::endl;
    try
    {
        Intern  namelessIntern;
        AForm   *forms;
        Bureaucrat  ze("Ze", 40);

        forms = namelessIntern.makeForm("shrubbery request", "tree");
        ze.signForm(*forms);
        ze.executeForm(*forms);
        delete forms;

        std::cout << std::endl;

        forms = namelessIntern.makeForm("robotomy request", "robocop");
        ze.signForm(*forms);
        ze.executeForm(*forms);
        delete forms;
        
        std::cout << std::endl;

        forms = namelessIntern.makeForm("presidential request", "Manel");
        ze.signForm(*forms);
        ze.executeForm(*forms);
        delete forms;

        std::cout << std::endl;

        forms = namelessIntern.makeForm("funds request", "me");
        ze.signForm(*forms);
        ze.executeForm(*forms);
        delete forms;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}