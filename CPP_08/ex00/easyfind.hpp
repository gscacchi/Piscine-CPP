#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <exception>

class Value : public std::exception
        {
                virtual const char * what() const throw() {
                    return("Value has not been found");
                }
        };
template<typename T>
void easyfind(T & container, int n){

    std::vector< int >::iterator location;
    location = std::find(container.begin(), container.end(), n);

    if ( location != container.end() )
      std::cout << "\nFound " << n << " at location " << ( location - container.begin() ) << std::endl;
    else 
      throw Value();
}
#endif