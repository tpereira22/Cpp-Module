#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void)
    : _name("Default"), _signed(false), _gradeReqSign(150), _gradeReqExec(150)
{

}

AForm::AForm(std::string name, int gradeReqSign, int gradeReqExec)
    : _name(name), _signed(false), _gradeReqSign(gradeReqSign), _gradeReqExec(gradeReqExec)
{
    if (gradeReqSign < 1 || gradeReqExec < 1)
        throw AForm::GradeTooHighException();
    else if (gradeReqSign > 150 || gradeReqExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &copy)
    : _name(copy._name), _signed(false), _gradeReqSign(copy._gradeReqSign), _gradeReqExec(copy._gradeReqExec)
{

}

AForm::~AForm(void)
{

}

AForm    &AForm::operator=(AForm const &copy)
{
    if (this != &copy)
    {
        _signed = copy._signed;
    }
    return *this;
}

std::string const   AForm::getName(void) const
{
    return this->_name;
}

bool                AForm::isSigned(void) const
{
    return this->_signed;
}

int const           AForm::getGradeReqSign(void) const
{
    return this->_gradeReqSign;
}

int const           AForm::getGradeReqExec(void) const
{
    return this->_gradeReqExec;
}

void    AForm::beSigned(Bureaucrat const &b)
{
    if (this->_signed == true)
        throw AForm::FormSignedException();
    if (b.getGrade() <= this->_gradeReqSign)
        this->_signed = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

bool    AForm::checkExec(Bureaucrat const &executor) const
{
    if (this->_signed == false)
        throw AForm::FormExecException();
    if (executor.getGrade() < this->_gradeReqExec)
        return true;
    else
        throw Bureaucrat::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Form Grade Too High !");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Form Grade Too Low !");
}

const char *AForm::FormSignedException::what() const throw()
{
    return ("Can't Sign ! Form is already signed !");
}

const char *AForm::FormExecException::what(void) const throw()
{
    return ("Can't Execute ! Form is not signed yet !");
}

std::ostream    &operator<<(std::ostream &o, AForm const &rhs)
{
    o << "Form Name: " << rhs.getName() << std::endl;
    o << "Grade Required to Sign: " << rhs.getGradeReqSign() << std::endl;
    o << "Grade Required to Execute: " << rhs.getGradeReqExec() << std::endl;
    o << "Signed: " << (rhs.isSigned() ? "Yes" : "No") << std::endl;
    return o;
}
