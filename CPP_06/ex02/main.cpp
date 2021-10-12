#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main(void){
    Base *p;

    p = generate();
    identify(p);
    identify(*p);

    delete(p);
}