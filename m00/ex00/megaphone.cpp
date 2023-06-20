#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (av && av[i])
        {
            j = 0;
            while (av[i] && av[i][j])
            {
                std::cout << (char)std::toupper(av[i][j]);
                j++;
            }
            i++;

        }    
        std::cout << std::endl;
    }
}