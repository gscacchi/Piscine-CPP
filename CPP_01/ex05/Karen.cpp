/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:50:15 by gscala            #+#    #+#             */
/*   Updated: 2021/09/03 15:50:16 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    this->jump_table[0] = &Karen::debug;
    this->jump_table[1] = &Karen::info;
    this->jump_table[2] = &Karen::warning;
    this->jump_table[3] = &Karen::error;
    this->levels[0] = "DEBUG";
    this->levels[1] = "INFO";
    this->levels[2] = "WARNING";
    this->levels[3] = "ERROR";
}

void    Karen::debug(void)
{
    std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month" << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


void    Karen::complain(std::string level)
{
    int i = 0;
    while (i < 4)
    {
        if (level.compare(levels[i]) == 0)
        {
            (this->*jump_table[i])();
            break;
        }
        i++;
    }
}



