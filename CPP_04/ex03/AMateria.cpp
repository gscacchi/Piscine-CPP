/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:51:36 by gscala            #+#    #+#             */
/*   Updated: 2021/09/22 14:51:39 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	// std::cout << "->AMateria default constructor called<- " << std::endl; 
}

AMateria::AMateria(std::string const & type) : type(type){
	// std::cout << "->AMateria parametric constructor called<- " << std::endl;
}

AMateria::AMateria(AMateria & src) {
	// std::cout << "->AMateria copy constructor called<-" << std::endl;
	*this = src;
}

AMateria::~AMateria() {
	// std::cout << "->AMateria destructor called<- " << std::endl;
}

std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "You shouldn't be able to call this" << std::endl;

}

AMateria & AMateria::operator=(AMateria const & rhs) {
	// std::cout << "->AMateria assignation operator called<-" << std::endl;
	this->type = rhs.type;
	return (*this);
}