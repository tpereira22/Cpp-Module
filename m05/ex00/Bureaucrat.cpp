#include "Bureaucrat.hpp"

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
    if (this != &copy)
    {
        this->_grade = copy._grade;
    }
    return *this;
}

// Inc/Dec
void    Bureaucrat::gradeIncrement(void)
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void    Bureaucrat::gradeDecrement(void)
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

// Getters
std::string const Bureaucrat::getName(void)
{
    return this->_name;
}

int         Bureaucrat::getGrade(void)
{
    return this->_grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too High !");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too Low !");
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return o;
}