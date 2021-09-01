/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:14:29 by gscala            #+#    #+#             */
/*   Updated: 2021/08/31 10:14:30 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
private:
    std::string name;
public:
    void    set_name(std::string new_name);
    void    announce(void);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif