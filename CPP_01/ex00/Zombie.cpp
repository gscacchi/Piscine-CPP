/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:23:10 by gscala            #+#    #+#             */
/*   Updated: 2021/08/30 11:23:12 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::~Zombie(){
    std::cout << this->name + " is being destroyed\n";
};

void    Zombie::set_name(std::string new_name){
   this->name = new_name;
};

void    Zombie::announce(void)
{
    std::cout << this->name + ":"  + " 'BraiiiiiiinnnzzzZ...'\n";
}