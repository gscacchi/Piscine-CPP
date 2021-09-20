/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:49:33 by gscala            #+#    #+#             */
/*   Updated: 2021/09/13 16:02:56 by gscala           ###   ########.fr       */
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

    void set_energy_points(int n);
    int  get_energy_points();
    void set_hitpoints(int n);
    int  get_hitpoints(void);
};

#endif