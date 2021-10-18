#include "easyfind.hpp"


int    fill_vector(){
    int myRand = rand() % 30;
    return(myRand);
}

int main(void){
    std::vector<int> v1(20);
    srand((unsigned)time(NULL));
    std::generate(v1.begin(), v1.end(), fill_vector);

    for (int i = 0; i < 20; i++)
        std::cout << i << ": " << v1[i] << std::endl;

    try{
    easyfind(v1, 16);}
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
}