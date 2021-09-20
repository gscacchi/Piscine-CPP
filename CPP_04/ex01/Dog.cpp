/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:32:27 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 15:32:28 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	std::cout << "->Dog default constructor called<- " << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog & src) {
	std::cout << "->Dog copy constructor called<-" << std::endl;
	brain = new Brain();
	*this = src;
	return ; 
}

Dog::~Dog() {
	std::cout << "->Dog default destructor called<- " << std::endl;
	delete brain;
}

void	Dog::makeSound() const {
	std::cout << "The " << type << " sound is: bau bau" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs) {
	std::cout << "->Dog assignation operator called<-" << std::endl;
	this->type = rhs.type;
	*brain = *rhs.brain;
	return (*this);
}

void Dog::setIdea(int index, std::string idea) {
	brain->setIdea(index, idea);
}

std::string	Dog::getIdea(int index) const {
	return brain->getIdea(index);
}