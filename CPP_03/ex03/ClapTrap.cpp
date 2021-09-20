/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:53:56 by gscala            #+#    #+#             */
/*   Updated: 2021/09/13 16:06:44 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
};

ClapTrap::ClapTrap(std::string name){
	std::cout << "Clap Trap " << name << " has been created " << std::endl;
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

void ClapTrap::set_energy_points(int n){
	this->_energy_points = n;
};

int ClapTrap::get_energy_points(void){
	return(this->_energy_points);
}

void ClapTrap::set_hitpoints(int n){
	this->_hitpoints = n;
}

int ClapTrap::get_hitpoints(void){
	return(this->_hitpoints);
}
