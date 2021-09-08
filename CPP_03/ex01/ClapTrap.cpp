/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:29:43 by gscala            #+#    #+#             */
/*   Updated: 2021/09/08 16:51:18 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	std::cout << name << " has been created " << std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
};

ClapTrap::~ClapTrap(){
	std::cout << _name << " has been destroyed " << std::endl;
}

std::string & ClapTrap::getname(void){
	std::string &neww = this->_name;
	return(neww);
};

void	ClapTrap::attack(std::string const & target){
	std::cout << _name << " attacks " << target << " causing " << _attack_damage << " points of damage" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << _name << " has taken " << amount << " points of damage " << std::endl;
	_energy_points -= amount;
	std::cout << _name << " has " << _energy_points << " energy point left " << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << _name << " is using repair lubricant " << std::endl;
	_energy_points += amount;
	std::cout << _name << " now has " << _energy_points << " energy points left " << std::endl;
};

