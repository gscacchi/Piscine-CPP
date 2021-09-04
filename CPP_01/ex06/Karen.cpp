/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:59:12 by gscala            #+#    #+#             */
/*   Updated: 2021/09/04 14:59:14 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(std::string argv1){
    set_arg(argv1);
    this->jump_table[0] = &Karen::debug;
    this->jump_table[1] = &Karen::info;
    this->jump_table[2] = &Karen::warning;
    this->jump_table[3] = &Karen::error;
    this->levels[0] = "DEBUG";
    this->levels[1] = "INFO";
    this->levels[2] = "WARNING";
    this->levels[3] = "ERROR";
}

void    Karen::set_arg(std::string arg1){
    this->arg = arg1;
}

void    Karen::debug(void)
{
    std::cout <<  "[DEBUG]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout <<  "[INFO]" << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month" << std::endl;
}

void    Karen::error(void)
{
    std::cout << "[ERROR]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string arg)
{
    int i = 0;
    while (i < 4)
    {
        if (arg.compare(levels[i]) == 0)
        {
            (this->*jump_table[i])();
            exit(1);
        }
        i++;
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}