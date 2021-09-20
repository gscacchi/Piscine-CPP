/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:54:04 by gscala            #+#    #+#             */
/*   Updated: 2021/09/13 16:55:43 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public ScavTrap, public FragTrap{
private:
    std::string _name;
public:
    DiamondTrap(std::string name);
    DiamondTrap();
    ~DiamondTrap();

    using ScavTrap::attack;
    using FragTrap::highFivesGuys;
    using ScavTrap::guardGate;
    using ScavTrap::get_energy_points;
    void whoAmI();
};


#endif