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
    int const           getGradeReqSign(void) const;
    int const           getGradeReqExec(void) const;

    void    beSigned(Bureaucrat const &b);
    virtual void    execute(Bureaucrat const &executor) const = 0;
    bool            checkExec(Bureaucrat const &executor) const;

    struct GradeTooHighException : public std::exception
    {
        virtual const char *what(void) const throw();
    };

    struct GradeTooLowException : public std::exception
    {
        virtual const char *what(void) const throw();
    };

    struct FormSignedException : public std::exception
    {
        virtual const char *what() const throw();
    };

    struct FormExecException : public std::exception
    {
        virtual const char *what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, AForm const &rhs);

#endif