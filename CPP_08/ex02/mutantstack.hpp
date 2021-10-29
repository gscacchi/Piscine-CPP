#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <exception>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack(): std::stack<T>(){};
        ~MutantStack(){};
        MutantStack(const MutantStack &stack){
		    *this = stack;	
	    };

	    MutantStack &operator=(const MutantStack &stack){
		    std::stack<T>::operator=(stack);
		    return *this;
	    };
        typedef typename std::deque<T>::iterator iterator;
        iterator begin(void){return(this->c.begin());};
        iterator end(void){return(this->c.end());};
};

#endif