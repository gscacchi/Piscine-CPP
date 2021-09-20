/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:30:58 by gscala            #+#    #+#             */
/*   Updated: 2021/09/15 13:32:05 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal{
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        Cat(Cat & src);
        virtual void makeSound() const;
        Cat & operator=(Cat const & rhs);      
};


#endif