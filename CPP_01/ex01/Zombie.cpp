/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:14:22 by gscala            #+#    #+#             */
/*   Updated: 2021/08/31 10:14:23 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->name + ":"  + " 'BraiiiiiiinnnzzzZ...'\n";
};

void    Zombie::set_name(std::string new_name){
   this->name = new_name;
};

Zombie::~Zombie(){
    std::cout << this->name + " is being destroyed\n";
};