/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:49:36 by gscala            #+#    #+#             */
/*   Updated: 2021/09/14 16:32:39 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){

};

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    _name = name;
    std::cout << "Frag Trap " << _name << " has been created " << std::endl;
    set_hitpoints(100);
    set_energy_points(100);
    this->_attack_damage = 30;
}

FragTrap::~FragTrap(){
    std::cout << "Frag Trap " << _name << " has been destroyed " << std::endl;
}

void    FragTrap::highFivesGuys(void){
    std::cout << "DAMMI IL CINQUE DAI BRO" << std::endl;
}

void FragTrap::attack(std::string const & target){
    std::cout << "Frag Trap " << _name << " attacks " << target << std::endl;
    _energy_points -= 1;
}