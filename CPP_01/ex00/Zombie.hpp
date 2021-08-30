/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:23:17 by gscala            #+#    #+#             */
/*   Updated: 2021/08/30 11:23:19 by gscala           ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void    randomChump(std::string name);


#endif
