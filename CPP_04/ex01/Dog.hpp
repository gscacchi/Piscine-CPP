/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:30:27 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 15:30:33 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(Dog & src);
	virtual ~Dog();

	virtual void	makeSound() const ;

	Dog & operator=(Dog const & rhs);

	void setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
};

#endif