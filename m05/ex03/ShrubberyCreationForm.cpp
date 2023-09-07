#include "ShrubberyCreationForm.hpp"

SCF::SCF(void) : AForm("Default Form", 150, 150) {}

SCF::SCF(std::string const target)
    : AForm("Shrubbery Creation Form", 145, 137)
{
    this->_target = target;
}

SCF::SCF(SCF const &copy)
{
    *this = copy;
}

SCF::~SCF(void) {}

SCF &SCF::operator=(SCF const &copy)
{
    this->_target = copy._target;
    return *this;
}

void    SCF::execute(Bureaucrat const &executor) const
{
    if (checkExec(executor))
    {
        std::ofstream    outputFile;
        outputFile.open((this->_target + "_shrubbery").c_str());
        if (!outputFile.is_open())
        {
            std::cout << "Error creating file !" << std::endl;
            return ;
        }
       	outputFile <<
			"         v" << std::endl <<
			"        >X<" << std::endl <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d\\$$b." << std::endl <<
			"    .d$i$$\\$$b." << std::endl <<
			"       d$$@b" << std::endl <<
			"      d\\$$$ib" << std::endl <<
			"    .d$$$\\$$$b" << std::endl <<
			"  .d$$@$$$$\\$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d\\$$$$@$b" << std::endl <<
			"  .d$@$$\\$$$$$@b." << std::endl <<
			".d$$$$i$$$\\$$$$$$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl;
        outputFile.close();
        std::cout << this->_target << "_shrubbery file has been created !" << std::endl;
    }
}