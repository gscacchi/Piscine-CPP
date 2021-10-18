#include "span.hpp"

Span::Span(int n){
    this->N = n;
}

void Span::addNumber(int n){

    try{
        if (v.size() < this->N)
            v.push_back(n);
    else
        throw addError();
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;}
}

int Span::longestSpan(){
    int c = 0;
    try{
        if (v.size() > 1)
        {   std::sort(v.begin(), v.end(), std::greater<int>());
            c = v[0] - v[v.size() - 1];
        }
        else
            throw spanError();
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;}
    return c;
}

int Span::shortestSpan(){
    int c = 0;
    try{
        if (v.size() > 1){
            std::sort(v.begin(), v.end(), std::greater<int>());
            c = v[0] - v[1];
            for (unsigned int i = 1; i < v.size() - 1; i++){
                if ((v[i] - v[i + 1]) < c)
                    c = v[i] - v[i + 1];
            }
        }
        else
            throw spanError();
        }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;}
    return(c);
}