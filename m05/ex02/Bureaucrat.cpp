#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default") {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name)
{
    std::cout << "Copy Constr" << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
    std::cout << "= Operator" << std::endl;
    if (this != &copy)
    {
        this->_grade = copy._grade;
    }
    return *this;
}

// Inc/Dec
void    Bureaucrat::gradeIncrement(void)
{
    try
    {
        if (this->_grade == 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade--;
    }
    catch (const std::exception& e)
    {
        std::cerr << this->_name << " Grade Increment is invalid! " << e.what() << std::endl;
    }
}

void    Bureaucrat::gradeDecrement(void)
{
    try
    {
        if (this->_grade == 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->_grade++;
    }
    catch (const std::exception& e)
    {
        std::cerr << this->_name << " Grade Decrement is invalid! " << e.what() << std::endl;
    }
}

// Getters
std::string const Bureaucrat::getName(void) const
{
    return this->_name;
}

int         Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

void        Bureaucrat::setGrade(int grade)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooLowException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade = grade;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Can't set " << this->_name << " grade. Error: " << e.what() << std::endl;
    }
}

void    Bureaucrat::signForm(AForm &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (const AForm::FormSignedException& e)
    {
        std::cerr << this->getName() << " couldn’t sign " << form.getName();
        std::cerr << ". Error:" << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << this->getName() << " couldn’t sign " << form.getName();
        std::cerr << ". Error: " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (const AForm::FormExecException& e)
    {
        std::cerr << this->_name << " could not execute the ";
        std::cerr << form.getName() << ". Error: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << this->_name << " could not execute the ";
        std::cerr << form.getName() << ". Error: " << e.what() << std::endl;
    }
    
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Bureaucrat Grade is too High !");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Bureaucrat Grade is too Low !");
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return o;
}