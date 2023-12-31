#include "RobotomyRequestForm.hpp"

int RRF::counter = 0;

RRF::RRF(void) : AForm("Default Form", 150, 150) {}

RRF::RRF(std::string const target)
    : AForm("Robotomy Request Form", 72, 45)
{
    this->_target = target;
}

RRF::RRF(RRF const &copy)
{
    *this = copy;
}

RRF::~RRF(void) {}

RRF &RRF::operator=(RRF const &copy)
{
    this->_target = copy._target;
    return *this;
}

void    RRF::execute(Bureaucrat const &executor) const
{
    if (checkExec(executor))
    {
        std::cout << "* DRILLING NOISES *" << std::endl;
        if (counter % 2 == 0)
            std::cout << this->_target << " robotomization has failed !" << std::endl;
        else
            std::cout << this->_target << " was robotomized successfully !" << std::endl;
        counter++;
    }
}
