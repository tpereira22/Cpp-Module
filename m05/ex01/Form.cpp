#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void)
    : _name("Default"), _signed(false), _gradeReqSign(150), _gradeReqExec(150)
{

}

Form::Form(std::string name, int gradeReqSign, int gradeReqExec)
    : _name(name), _signed(false), _gradeReqSign(gradeReqSign), _gradeReqExec(gradeReqExec)
{
    if (gradeReqSign < 1 || gradeReqExec < 1)
        throw Form::GradeTooHighException();
    else if (gradeReqSign > 150 || gradeReqExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &copy)
    : _name(copy._name), _signed(false), _gradeReqSign(copy._gradeReqSign), _gradeReqExec(copy._gradeReqExec)
{

}

Form::~Form(void)
{

}

Form    &Form::operator=(Form const &copy)
{
    if (this != &copy)
    {
        _signed = copy._signed;
    }
    return *this;
}

std::string const   Form::getName(void) const
{
    return this->_name;
}

bool                Form::isSigned(void) const
{
    return this->_signed;
}

int           Form::getGradeReqSign(void) const
{
    return this->_gradeReqSign;
}

int           Form::getGradeReqExec(void) const
{
    return this->_gradeReqExec;
}

void    Form::beSigned(Bureaucrat const &b)
{
    if (this->_signed == true)
        throw Form::FormSignedException();
    if (b.getGrade() <= this->_gradeReqSign)
        this->_signed = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form Grade Too High !");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form Grade Too Low !");
}

const char *Form::FormSignedException::what() const throw()
{
    return ("Form is already Signed !");
}

std::ostream    &operator<<(std::ostream &o, Form const &rhs)
{
    o << "Form Name: " << rhs.getName() << std::endl;
    o << "Grade Required to Sign: " << rhs.getGradeReqSign() << std::endl;
    o << "Grade Required to Execute: " << rhs.getGradeReqExec() << std::endl;
    o << "Signed: " << (rhs.isSigned() ? "Yes" : "No") << std::endl;
    return o;
}
