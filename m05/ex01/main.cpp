#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    try // trying to create a out of range form
    {
        std::cout << "-------> TEST OUT OF RANGE GRADES ------->" << std::endl;
        Form    form1("form1", 0, 50);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try // trying to create a out of range form
    {
        Form    form2("form2", 1, 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try // test signing a form
    {
        std::cout << "-------> TEST SIGNING FORMS ------->" << std::endl;
        Form    form("form", 10, 50);
        Bureaucrat  ze("ze", 12);
        ze.signForm(form); // can't sign form. grade too low
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        std::cout << "--------------" << std::endl;
        Form    form("form", 10, 50);
        Bureaucrat  ze("ze", 9);

        ze.signForm(form);
        ze.signForm(form); // try sign already signed form
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        std::cout << "--------------" << std::endl;
        Form    form("form", 10, 50);
        Bureaucrat  ze("ze", 9);

        std::cout << form << std::endl; //form << overload - not signed
        ze.signForm(form);
        std::cout << std::endl;
        std::cout << form << std::endl; //form << overload - signed
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}