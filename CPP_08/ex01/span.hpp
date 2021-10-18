#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <exception>


class addError : public std::exception
{
        virtual const char * what() const throw() {
             return("Impossible to add any more numbers");
        }
};

class spanError : public std::exception
{
        virtual const char * what() const throw() {
             return("Impossible to find span");
        }
};
class Span{
    private:
        unsigned int N;
        std::vector<int>v;
    public:
        Span(int n);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};


#endif