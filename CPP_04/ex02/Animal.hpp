/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:29:50 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 16:00:48 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(Animal & src);
	virtual ~Animal();

	virtual void	makeSound() const = 0;

	Animal & operator=(Animal const & rhs);

	std::string	getType() const;
};

#endif