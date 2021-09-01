/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:08:10 by gscala            #+#    #+#             */
/*   Updated: 2021/09/01 10:08:12 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class   Weapon{
    private:
        std::string     _type;
    public:
        std::string&    get_type();
        void            setType(std::string new_type);
        Weapon(std::string type);
};


#endif
