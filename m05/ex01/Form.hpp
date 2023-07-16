#ifndef FORMS_H
# define FORMS_H

# include <iostream>

class Form
{
private:
    std::string const   _name;
    bool                _signed;
    int const           _gradeReqSign;
    int const           _gradeReqExec;
public:
    Form(void);
    Form(std::string name, int gradeReqSign, int gradeReqExec);
    Form(Form const &copy);
    ~Form(void);

    Form    &operator=(Form const &copy);

    std::string const   getName(void);
    bool                isSigned(void);
    int const           getGradeReqSign(void);
    int const           getGradeReqExec(void);

    struct GradeTooHightException : public std::exception
    {
        virtual const char *what() const throw();
    };

    struct GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    
};

#endif