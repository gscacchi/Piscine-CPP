/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:49:40 by gscala            #+#    #+#             */
/*   Updated: 2021/09/15 13:50:17 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal{
    public:
        WrongCat();
        WrongCat(std::string type);
        ~WrongCat();
        WrongCat(WrongCat & src);
        void makeSound() const;
        WrongCat & operator=(WrongCat const & rhs);      
};


#endif