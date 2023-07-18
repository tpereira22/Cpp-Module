#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "AForm.hpp"

# define RRF RobotomyRequestForm

class RobotomyRequestForm : public AForm
{
private:
public:
    RRF(void);
    RRF(std::string const target);
    RRF(RRF const &copy);
    ~RRF(void);

    RRF &operator=(RRF const &copy);

    void    execute(Bureaucrat const &executor) const;
};

#endif