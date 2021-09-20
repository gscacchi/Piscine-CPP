/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:21:05 by gscala            #+#    #+#             */
/*   Updated: 2021/09/15 13:48:17 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Standard constructor called for Dog class" << std::endl; 
}

Dog::Dog(std::string type){
    this->_type = type;
    std::cout << "Parametric constructor called for " << _type << " of Dog class" << std::endl;
}

Dog::~Dog(){
    std::cout << "Destructor called for " << _type << " of Dog class" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "This " << _type << " says 'Woof Woof Woof' " << std::endl;
}

Dog::Dog(Dog & src){
    std::cout << "->Dog copy constructor called<-" << std::endl;
    *this = src;
    return ;
}

Dog & Dog::operator=(Dog const & rhs) {
	std::cout << "->Dog assignation operator called<-" << std::endl;
	this->_type = rhs._type;
	return (*this);
}