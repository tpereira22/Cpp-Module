#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <array>
# include <algorithm>

template <typename T>
int &easyfind(T &cont, int num)
{
    typename T::iterator it;
    
    it = std::find(cont.begin(), cont.end(), num);
    if (it == cont.end())
        throw std::exception();
    return *it;
}

#endif