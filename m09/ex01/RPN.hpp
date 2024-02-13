#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN 
{
private:
    RPN();
    RPN(const RPN &copy);
    ~RPN();

    const RPN &operator=(const RPN &copy);

    static int checkExpFormat(std::string exp);
    static void checkFinalResult(std::stack<float> &numberStack);
    static void doOperation(std::stack<float> &numberStack, char op);
    static void processExp(std::string exp);


public:
    static void callRPN(std::string exp);

};

#endif