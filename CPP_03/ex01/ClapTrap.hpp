/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:29:54 by gscala            #+#    #+#             */
/*   Updated: 2021/09/08 17:05:40 by gscala           ###   ########.fr       */
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
    ClapTrap(std::string name);
    ~ClapTrap();
    std::string & getname(void);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
