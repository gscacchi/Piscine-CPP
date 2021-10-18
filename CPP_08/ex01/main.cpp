#include "span.hpp"

int    fill_vector(){
    int myRand = rand() % 1000;
    return(myRand);
}

int main(void){

    int n = 10;
    int x;
    Span sp = Span(n);

    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++){
        x = fill_vector();
        sp.addNumber(x);
    }

    std::cout << "longest span is: " << sp.longestSpan() << std::endl;
    std::cout << "shortest span is: " << sp.shortestSpan() << std::endl;


}