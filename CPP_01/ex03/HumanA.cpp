/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:08:21 by gscala            #+#    #+#             */
/*   Updated: 2021/09/01 10:08:22 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
    this->name = name;
    this->weapon = &weapon;
};

void    HumanA::attack()
{
    std::cout << this->name << " attacks with his " << weapon->get_type() << std::endl;
}