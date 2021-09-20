/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:30:21 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 15:30:24 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(Cat & src);
	virtual ~Cat();

	virtual void	makeSound() const ;

	Cat & operator=(Cat const & rhs);

	void setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
};

#endif