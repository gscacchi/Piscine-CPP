/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:53:49 by gscala            #+#    #+#             */
/*   Updated: 2021/09/22 14:53:50 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	// std::cout << "->MateriaSource default constructor called<- " << std::endl; 
	for (int i = 0; i < 4; i++) {
		recipes[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource & src) {
	// std::cout << "->MateriaSource copy constructor called<-" << std::endl;
	for (int i = 0; i < 4; i ++) {
		recipes[i] = NULL;
	}
	*this = src;
}

MateriaSource::~MateriaSource() {
	// std::cout << "->MateriaSource destructor called<- "  << std::endl;
	for (int i = 0; i < 4; i++){
		if (recipes[i]) {
			delete recipes[i];
		}
	}
}

// learnMateria must copy the Materia passed as a parameter, and store it in memory
// to be cloned later. Much in the same way as for Character , the Source can know at
// most 4 Materia, which are not necessarily unique.
void MateriaSource::learnMateria(AMateria* amateria) {
	for (int i = 0; i < 4; i++) {
		if (!recipes[i]) {
			recipes[i] = amateria->clone();
			std::cout << "Learned Materia " + amateria->getType() + " at index " << i << std::endl;
			return ;
		}
	}
	std::cout << "No slot available to learned Materia " + amateria->getType() << std::endl;
}

// will return a new Materia, which will be a
// copy of the Materia (previously learned by the Source) which type equals the parameter.
// Returns 0 if the type is unknown.
AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (recipes[i]->getType() == type) {
			return recipes[i]->clone();
		}
	}
	std::cout << "Materia " + type + " not found" << std::endl;
	return NULL;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
	// std::cout << "->MateriaSource assignation operator called<-" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (recipes[i]) {
			delete recipes[i];
		}
		recipes[i] = rhs.recipes[i]->clone();
	}
	return (*this);
}