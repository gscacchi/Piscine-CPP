/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:54:04 by gscala            #+#    #+#             */
/*   Updated: 2021/09/12 10:26:55 by gscala           ###   ########.fr       */
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
    ~DiamondTrap();

    using ScavTrap::attack;
    using FragTrap::highFivesGuys;
    using ScavTrap::guardGate;
    void whoAmI();
    
};


#endif