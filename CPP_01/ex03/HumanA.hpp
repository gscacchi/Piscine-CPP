/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:08:30 by gscala            #+#    #+#             */
/*   Updated: 2021/09/01 10:08:31 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     HUMANA_HPP
#define     HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		void	attack();
		HumanA(std::string name, Weapon &weapon);
};


#endif

