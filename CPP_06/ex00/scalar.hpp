#ifndef SCALAR_HPP 
#define SCALAR_HPP

#include <string>
#include <iostream>
#include <ctype.h>
#include <math.h>

class Convert{
    private:
        std::string _value;
    public:
        Convert();
        ~Convert();
        Convert(std::string value);

        void toChar(float value);
        void toInt(float value);
        void toFloat(float value);
        void toDouble(float value);
};

#endif