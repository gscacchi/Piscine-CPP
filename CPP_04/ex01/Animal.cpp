/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:31:57 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 15:31:59 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "->Animal default constructor called<- " << std::endl;
	type = "Animal";
}

Animal::Animal(Animal & src) {
	std::cout << "->Animal copy constructor called<-" << std::endl;
	*this = src;
	return ; 
}

Animal::~Animal() {
	std::cout << "->Animal default destructor called<- " << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "The " << type << " sound is: Nella vecchia fattoria, Ia Ia Oh ... Quante bestie ha zio Tobia, Ia Ia Oh" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {
	std::cout << "->Animal assignation operator called<-" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string Animal::getType() const {
	return this->type;
}