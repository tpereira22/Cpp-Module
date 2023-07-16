#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>



class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;
public:
    Bureaucrat(void);
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &copy);
    ~Bureaucrat(void);

    Bureaucrat &operator=(Bureaucrat const &copy);

    std::string const   getName(void);
    int                 getGrade(void);
    
    void    setGrade(int grade);

    void    gradeIncrement(void);
    void    gradeDecrement(void);

    struct  GradeTooHighException : public std::exception
    {
        virtual const char *what(void) const throw();
    };

    struct  GradeTooLowException : public std::exception
    {
        virtual const char *what(void) const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat &rhs);

#endif