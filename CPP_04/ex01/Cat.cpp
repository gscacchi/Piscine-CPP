/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:32:19 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 15:32:20 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	std::cout << "->Cat default constructor called<- " << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat & src) {
	std::cout << "->Cat copy constructor called<-" << std::endl;
	brain = new Brain();
	*this = src;
	return ; 
}

Cat::~Cat() {
	std::cout << "->Cat default destructor called<- " << std::endl;
	delete brain;
}

void	Cat::makeSound() const {
	std::cout << "The " << type << " sound is: miao miao" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs) {
	std::cout << "->Cat assignation operator called<-" << std::endl;
	this->type = rhs.type;
	*brain = *rhs.brain;
	return (*this);
}

void Cat::setIdea(int index, std::string idea) {
	brain->setIdea(index, idea);
}

std::string	Cat::getIdea(int index) const {
	return brain->getIdea(index);
}