#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
    AForm   *makeShrubbery(std::string target);
    AForm   *makeRobotomy(std::string target);
    AForm   *makePresidential(std::string target);
    Intern(void);
    Intern(Intern const &copy);
    ~Intern(void);

    Intern  &operator=(Intern const &copy);

    AForm   *makeForm(std::string formName, std::string formTarget);
    
    class InternException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    
};

#endif