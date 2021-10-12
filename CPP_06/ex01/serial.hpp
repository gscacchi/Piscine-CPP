#ifndef SERIAL_HPP
#define SERIAL_HPP

#include <string>
#include <iostream>
#include <ctype.h>
#include <math.h>


class Data{
    public:
        int n;
};

uintptr_t serialize(Data *ptr);
Data* deserialize(uintptr_t raw);


#endif