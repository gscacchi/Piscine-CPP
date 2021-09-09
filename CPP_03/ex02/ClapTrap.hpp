/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:49:33 by gscala            #+#    #+#             */
/*   Updated: 2021/09/09 15:50:26 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <fstream>

class ClapTrap{
protected:
    std::string _name;
    int _hitpoints;
    int _energy_points;
    int _attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    std::string & getname(void);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif