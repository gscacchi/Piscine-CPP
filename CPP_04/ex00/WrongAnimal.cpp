/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:50:35 by gscala            #+#    #+#             */
/*   Updated: 2021/09/15 13:50:49 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "Standard constructor called " << std::endl;
}


WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor called for WrongAnimal class" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & src){
    std::cout << "->WrongAnimal copy constructor called<-" << std::endl;
    *this = src;
    return ;
}

void    WrongAnimal::makeSound() const{
    std::cout <<  "WrongAnimal " << "does not yet know what kind of WrongAnimal it is, therefore the sound coming out of it is just an horrific fart" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {
	std::cout << "->WrongAnimal assignation operator called<-" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

std::string     WrongAnimal::getType() const{
    return(this->_type);
}

