#include "ParseUtils.hpp"

std::string getType(std::string& str)
{
    std::string type;
    (void)str;
    return type;
}

void    removeSpaces(std::string& str)
{
    std::string::iterator it;
    for (it = str.begin(); it != str.end();)
    {
        if (*it == 32)
        {
            it = str.erase(it);
            std::cout << "yey" << std::endl;
        }
        else
            return ;
    }
}