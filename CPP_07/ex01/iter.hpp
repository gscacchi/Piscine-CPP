#ifndef ITER_HPP
#define ITER_HPP

#include <math.h>
#include <iostream>
#include <string>

template<typename T>
void iter( T* address, size_t length, void (*f) (T x)){
    for (size_t c = 0; c < length; c++){
        f(address[c]);
    }
}
template<typename T>
void ft_print(T x){
    std::cout << x << std::endl;
}

#endif