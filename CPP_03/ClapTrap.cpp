/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:29:43 by gscala            #+#    #+#             */
/*   Updated: 2021/09/07 18:17:19 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
};

std::string & ClapTrap::getname(void){
	std::string &neww = this->_name;
	return(neww);
};

void	ClapTrap::attack(std::string const & target){
	std::cout << "Clap Trap " << _name << " attacks " << target << " causing " << _attack_damage << " points of damage" << std::endl;
}