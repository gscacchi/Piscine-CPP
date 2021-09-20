#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Standard constructor called " << std::endl;
}


Animal::~Animal(){
    std::cout << "Destructor called for Animal class" << std::endl;
}

Animal::Animal(Animal & src){
    std::cout << "->Animal copy constructor called<-" << std::endl;
    *this = src;
    return ;
}

void    Animal::makeSound() const{
    std::cout <<  "Animal " << "does not yet know what kind of animal it is, therefore the sound coming out of it is just an horrific fart" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {
	std::cout << "->Animal assignation operator called<-" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

std::string     Animal::getType() const{
    return(this->_type);
}

