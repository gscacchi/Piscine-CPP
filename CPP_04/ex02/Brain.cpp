/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:32:07 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 15:32:08 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "->Brain default constructor called<- " << std::endl;
}

Brain::Brain(int index, std::string idea) {
	std::cout << "->Brain parametric constructor called<- " << std::endl;
	ideas[index] = idea;
}

Brain::Brain(Brain & src) {
	std::cout << "->Brain copy constructor called<-" << std::endl;
	*this = src;
	return ; 
}

Brain::~Brain() {
	std::cout << "->Brain default destructor called<- " << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {
	std::cout << "->Brain assignation operator called<-" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const {
	return this->ideas[index];
}