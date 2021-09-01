/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:07:55 by gscala            #+#    #+#             */
/*   Updated: 2021/09/01 10:07:56 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

int     main(void)
{
    Weapon sasso("Sasso Gigante");
    HumanA gigi("Gigi", sasso);

    gigi.attack();
}