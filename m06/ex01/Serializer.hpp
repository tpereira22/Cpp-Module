#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
public:
    Serializer(void);
    ~Serializer(void);
    Serializer(const Serializer& copy);
    Serializer& operator=(const Serializer& copy);

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

};

#endif