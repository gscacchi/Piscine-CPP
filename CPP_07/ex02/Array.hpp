#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <math.h>
#include <exception>

template <typename T>
class Array{
    private:
        T* array;
        unsigned int length;
    public:
        //construction with no parameters
        Array();

        //construction with insigned int as parameter
        Array(unsigned int n)
        {
            this->length = n;
            array = new T[length];
        };
};

#endif