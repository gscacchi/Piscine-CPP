/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:58:55 by gscala            #+#    #+#             */
/*   Updated: 2021/09/04 14:58:56 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int     main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "[ Karen is talking too much...but her arguments aren't good enough ]" << std::endl;
        return(1);
    }
    Karen karen(av[1]);
    karen.complain(av[1]);
    return(1);
}
