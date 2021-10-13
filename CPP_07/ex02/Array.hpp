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
        unsigned int getLength(void)
        {
            return (length);
        }
        Array() : array(NULL), length(0) {};

        //construction with unsigned int as parameter
        Array(unsigned int n)        {
            this->length = n;
            array = new T[length];
            for (unsigned int i = 0; i < length; i++)
                array[i] = 0;
        };
        const Array& operator=(const Array&arr)
        {
            this->length = arr.length;
            array = new T[length];
            for (int i = 0; i < length; i++)
                array[i] = arr[i];
            return(*this);
        }

        Array(Array &arr)
	    {
		    T *tempCopy;
		    tempCopy = new T[arr.length];
		    for (unsigned int i = 0; i < arr.length; i++)
		    	tempCopy[i] = arr.array[i];
		    length = arr.length;
		    this->array = tempCopy;
	    };

        
};

#endif