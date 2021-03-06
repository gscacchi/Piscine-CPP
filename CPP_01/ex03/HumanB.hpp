/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:08:47 by gscala            #+#    #+#             */
/*   Updated: 2021/09/01 10:08:49 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     HUMANB_HPP
#define     HUMANB_HPP

#include "Weapon.hpp"

class	HumanB{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		void	attack();
        void    setWeapon(Weapon &weapon);
		HumanB(std::string name);
};


#endif

