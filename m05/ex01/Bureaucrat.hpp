#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Form;

class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;
    Bureaucrat(void);
public:
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &copy);
    ~Bureaucrat(void);

    Bureaucrat &operator=(Bureaucrat const &copy);

    std::string const   getName(void) const;
    int                 getGrade(void) const;
    
    void    setGrade(int grade);

    void    gradeIncrement(void);
    void    gradeDecrement(void);

    void    signForm(Form &form) const;

    struct  GradeTooHighException : public std::exception
    {
        virtual const char *what(void) const throw();
    };

    struct  GradeTooLowException : public std::exception
    {
        virtual const char *what(void) const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif