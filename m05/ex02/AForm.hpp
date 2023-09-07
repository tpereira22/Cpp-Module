#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class AForm
{
private:
    std::string const   _name;
    bool                _signed;
    int const           _gradeReqSign;
    int const           _gradeReqExec;
protected:
    std::string         _target;
public:
    AForm(void);
    AForm(std::string name, int gradeReqSign, int gradeReqExec);
    AForm(AForm const &copy);
    virtual ~AForm(void);

    AForm    &operator=(AForm const &copy);

    std::string const   getName(void) const;
    bool                isSigned(void) const;
    bool                isExec(void) const;
    int                 getGradeReqSign(void) const;
    int                 getGradeReqExec(void) const;

    void    beSigned(Bureaucrat const &b);
    virtual void    execute(Bureaucrat const &executor) const = 0;
    bool            checkExec(Bureaucrat const &executor) const;

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

    class FormExecException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, AForm const &rhs);

#endif