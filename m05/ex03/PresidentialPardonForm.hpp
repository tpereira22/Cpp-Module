#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"

# define PPF PresidentialPardonForm

class PresidentialPardonForm : public AForm
{
private:
public:
    PPF(void);
    PPF(std::string const target);
    PPF(PPF const &copy);
    ~PPF(void);

    PPF &operator=(PPF const &copy);

    void    execute(Bureaucrat const &executor) const;
};
#endif