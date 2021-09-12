/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:49:39 by gscala            #+#    #+#             */
/*   Updated: 2021/09/12 10:21:45 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void attack(std::string const & target);
        void highFivesGuys(void);

        void set_hitpoints(int n);
        int get_hitpoints(void);
};

#endif