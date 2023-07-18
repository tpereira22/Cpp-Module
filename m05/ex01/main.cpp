#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    try // trying to create a out of range form
    {
        std::cout << "-------> TEST OUT OF RANGE GRADES ------->" << std::endl;
        Form    form("form", 0, 50);
        Bureaucrat  ze("ze", 12);
        Bureaucrat  luis("luis", 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try // trying to create a out of range form
    {
        std::cout << "-------> TEST OUT OF RANGE GRADES ------->" << std::endl;
        Form    form("form", 1, 151);
        Bureaucrat  ze("ze", 12);
        Bureaucrat  luis("luis", 5);
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
        Bureaucrat  luis("luis", 5);

        std::cout << form << std::endl; // print form info
        ze.signForm(form); // can't sign form. grade too low
        ze.gradeIncrement(); // inc grade
        ze.gradeIncrement();
        ze.signForm(form); // try sign again
        luis.signForm(form); // try sign already signed form
        std::cout << std::endl;
        std::cout << form << std::endl; // print form info. should be signed
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    // std::cout << a << b << std::endl;
}