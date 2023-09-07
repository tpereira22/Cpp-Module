#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"
# include <fstream>

# define SCF ShrubberyCreationForm

class ShrubberyCreationForm : public AForm
{
private:
    SCF(void);
public:
    SCF(std::string const target);
    SCF(SCF const &copy);
    ~SCF(void);
    
    SCF &operator=(SCF const &copy);

    void    execute(Bureaucrat const &executor) const;
};

#endif