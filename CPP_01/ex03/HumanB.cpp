/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:08:39 by gscala            #+#    #+#             */
/*   Updated: 2021/09/01 10:08:40 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
};

void    HumanB::attack()
{
    std::cout << this->name << " attacks with his " << weapon->get_type() << std::endl;
};

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
