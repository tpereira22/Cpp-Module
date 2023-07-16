#include "Form.hpp"

Form::Form(void)
    : _name("Default"), _signed(false), _gradeReqSign(150), _gradeReqExec(150)
{

}

Form::Form(std::string name, int gradeReqSign, int gradeReqExec)
    : _name(name), _signed(false), _gradeReqSign(gradeReqSign), _gradeReqExec(gradeReqExec)
{

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

}

std::string const   Form::getName(void)
{
    return this->_name;
}

bool                Form::isSigned(void)
{
    return this->_signed;
}

int const           Form::getGradeReqSign(void)
{
    return this->_gradeReqSign;
}

int const           Form::getGradeReqExec(void)
{
    return this->_gradeReqExec;
}

const char *Form::GradeTooHightException::what() const throw()
{

}

const char *Form::GradeTooLowException::what() const throw()
{

}