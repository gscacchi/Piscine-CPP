/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:14:38 by gscala            #+#    #+#             */
/*   Updated: 2021/08/31 10:14:40 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombies[i].set_name(name);
        zombies[i].announce();
    }
    return(zombies);
}