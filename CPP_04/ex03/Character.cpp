/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:53:02 by gscala            #+#    #+#             */
/*   Updated: 2021/09/22 14:53:03 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	// std::cout << "->Character default constructor called<- " << std::endl; 
}

Character::Character(std::string name)  : name(name){
	// std::cout << "->Character parametric constructor called<- " << std::endl; 
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(Character & src) {
	// std::cout << "->Character copy constructor called<-" << std::endl;
	this->name = src.getName();
	*this = src;
}

Character::~Character() {
	// std::cout << "->Character destructor called<- "  << std::endl;
	for (int i = 0; i < 4; i++) {
		delete inventory[i];
	}
}

std::string const & Character::getName() const {
	return this->name;
}

// In case we try to equip a Materia in a full inventory, or use/unequip a nonexistent Materia, don’t do a thing.
void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			std::cout << "Materia " + m->getType() + " equipped at index " << i << std::endl;
			return ;
		}
	}
	std::cout << "Unable to equip Materia " + m->getType() + ", inventory is full" << std::endl;
}

// The unequip method must NOT delete Materia!
void Character::unequip(int idx) {
	if (idx > 3 || idx < 0) {
		std::cout << "index does not exist" << std::endl;
	}
	if (!inventory[idx]) {
		std::cout << "Inventory is already empty at that index" << std::endl;
		return ;
	}
	std::cout << "Materia " + inventory[idx]->getType() + ", unequipped from index " << idx << std::endl;
	inventory[idx] = NULL;
}

//The use(int, ICharacter&) method will have to use the Materia at the idx slot,
//and pass target as parameter to the AMateria::use method.
void Character::use(int idx, ICharacter& target) {
	if (inventory[idx]) {
		inventory[idx]->use(target);
		delete inventory[idx];
		inventory[idx] = NULL;
	} else {
		std::cout << "Inventory is empty at index " << idx << std::endl;
	}
}

// Copy or assignation of a Character must be deep, of course(= use clone method).
// The old Materia of a Character must be deleted. Same upon the destruction of a Character .
Character & Character::operator=(Character & rhs) {
	// std::cout << "->Character assignation operator called<-" << std::endl;
//	this->name = rhs.getName();
	for (int i = 0; i < 4; i++) {
		if (rhs.inventory[i]) {
			inventory[i] = rhs.inventory[i]->clone();
			delete rhs.inventory[i];
			rhs.inventory[i] = NULL;
		}
	}
	return (*this);
}