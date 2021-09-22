/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:53:28 by gscala            #+#    #+#             */
/*   Updated: 2021/09/22 14:53:29 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	// std::cout << "->Cure default constructor called<- " << std::endl; 
}

Cure::Cure(Cure & src) {
	// std::cout << "->Cure copy constructor called<-" << std::endl;
	*this = src;
}

Cure::~Cure() {
	// std::cout << "->Cure destructor called<- "  << std::endl;
}

Cure* Cure::clone() const {
	Cure *cure = new Cure;
	return cure;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}

Cure & Cure::operator=(Cure const & rhs) {
	// std::cout << "->Cure assignation operator called<-" << std::endl;
	this->type = rhs.type;
	return (*this);
}