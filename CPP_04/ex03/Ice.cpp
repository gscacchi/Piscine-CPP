/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:15:03 by gscala            #+#    #+#             */
/*   Updated: 2021/09/22 14:51:12 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "->Ice default constructor called<- " << std::endl;
}

Ice::Ice(Ice & src) {
	// std::cout << "->Ice copy constructor called<-" << std::endl;
	*this = src;
}

Ice::~Ice() {
	// std::cout << "->Ice destructor called<- " << std::endl;
}

Ice* Ice::clone() const {
	Ice *ice = new Ice;
	return ice;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

Ice & Ice::operator=(Ice const & rhs) {
	this->type = rhs.type;
	return (*this);
}