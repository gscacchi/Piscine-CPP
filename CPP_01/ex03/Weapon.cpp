/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:08:03 by gscala            #+#    #+#             */
/*   Updated: 2021/09/01 10:08:04 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string&    Weapon::get_type(){

    std::string &ref = this->_type;
    return(ref);
};

void           Weapon::set_type(std::string new_type){
    this->_type = new_type;
};

Weapon::Weapon(std::string type){
    set_type(type);
};