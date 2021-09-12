/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 09:48:02 by gscala            #+#    #+#             */
/*   Updated: 2021/09/12 11:58:37 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name){
    std::cout << "Parametric Diamond Constructor called" << std::endl;
    _name = name;
    ClapTrap::_name = name + "_clap_name";
    set_hitpoints(FragTrap::get_hitpoints());
    _energy_points = ClapTrap::_energy_points;
    //FOR SOME REASON ENERGY POINTS ARE ALWAYS 100 !!!!!!
    std::cout << "HITPOINTSS == " << _hitpoints << std::endl;
    std::cout << "ENERGYPOINTSS == " << _energy_points << std::endl;
};

DiamondTrap::~DiamondTrap(){
    std::cout << "Diamond Trap " << this->_name << " is being destroyed " << std::endl;
};

void DiamondTrap::whoAmI(){
    std::cout << "Who am I ? " << " My diamond name is " << this->_name << " but my clap name is " << this->ClapTrap::_name << std::endl;
}

