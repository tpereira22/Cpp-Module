#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
private:
    std::string const   _name;
    bool                _signed;
    int const           _gradeReqSign;
    int const           _gradeReqExec;
    Form(void);
public:
    Form(std::string name, int gradeReqSign, int gradeReqExec);
    Form(Form const &copy);
    ~Form(void);

    Form    &operator=(Form const &copy);

    std::string const   getName(void) const;
    bool                isSigned(void) const;
    int                 getGradeReqSign(void) const;
    int                 getGradeReqExec(void) const;

    void    beSigned(Bureaucrat const &b);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };

    class FormSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    
};

std::ostream    &operator<<(std::ostream &o, Form const &rhs);

#endif