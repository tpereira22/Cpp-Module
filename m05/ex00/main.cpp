#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "-------> TEST VALID GRADES ------->" << std::endl;
    try // creating bureaucrat with valid grades and printing them
    {
        Bureaucrat a("ze", 10);
        Bureaucrat b("Luis", 1);
        Bureaucrat c("Manel", 150); 
        
        std::cout << a << b << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "Creating a bureaucrat with invalid grade." << std::endl;
    }
    std::cout << std::endl;
    std::cout << "-------> TEST INVALID GRADES ------->" << std::endl;
    try // creating bureaucrat with invalid grades
    {
        Bureaucrat a("ze", 10);
        Bureaucrat b("Luis", 0);
        Bureaucrat c("Manel", 151); 
        
        std::cout << a << b << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "Creating a bureaucrat with invalid grade." << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "-------> TEST INC/DEC GRADES ------->" << std::endl;
    try // testing grade inc/dec
    {
        Bureaucrat a("ze", 10);
        Bureaucrat b("Luis", 1);
        Bureaucrat c("Manel", 150); 
        
        a.gradeIncrement();
        a.gradeIncrement();
        b.gradeIncrement();
        c.gradeIncrement();
        std::cout << a << b << c << std::endl;
        std::cout << std::endl;
        a.gradeDecrement();
        b.gradeDecrement();
        c.gradeDecrement();
        c.gradeDecrement();
        std::cout << a << b << c << std::endl;
    }
        catch(const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}