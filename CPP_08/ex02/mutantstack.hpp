#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <exception>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack(): std::stack<T>(){};
        ~MutantStack();
        MutantStack& operator=( const MutantStack& other); //replaces the contents of the container adaptor with those of other
        unsigned int begin(void);
        unsigned int end(void);
};


#endif