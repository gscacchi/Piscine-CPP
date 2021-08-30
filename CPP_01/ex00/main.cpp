/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:22:54 by gscala            #+#    #+#             */
/*   Updated: 2021/08/30 11:22:56 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie *zombi;
    zombi = newZombie("Gianni");
    zombi->announce();
    delete zombi;
    randomChump("Giorgio");

    return(0);
}
