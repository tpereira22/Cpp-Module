#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>



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

    std::string const   getName(void);
    int                 getGrade(void);

    void    gradeIncrement(void);
    void    gradeDecrement(void);

    class  GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };

    class  GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what(void) const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat &rhs);

#endif