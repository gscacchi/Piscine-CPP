/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:29:59 by gscala            #+#    #+#             */
/*   Updated: 2021/09/08 16:08:36 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap mostro("Ostia");
    ClapTrap mostro1("Paoletto");
    mostro.attack("Paoletto");
    mostro1.takeDamage(0);
    mostro1.beRepaired(2);
}
