#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class   Animal{
    protected:
        std::string _type;
    public:
        Animal();
        ~Animal();
        Animal(Animal & src);
        virtual void makeSound() const;
        Animal & operator=(Animal const & rhs);
        std::string getType() const;
};


#endif