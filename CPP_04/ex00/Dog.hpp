/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:21:12 by gscala            #+#    #+#             */
/*   Updated: 2021/09/15 12:25:33 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog(Dog & src);
        virtual void makeSound() const;
        Dog & operator=(Dog const & rhs);
};


#endif