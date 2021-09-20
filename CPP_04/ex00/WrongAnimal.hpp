/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:50:32 by gscala            #+#    #+#             */
/*   Updated: 2021/09/15 13:51:10 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongAnimal_HPP
#define WRONGWrongAnimal_HPP

#include <string>
#include <iostream>

class   WrongAnimal{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal & src);
        void makeSound() const;
        WrongAnimal & operator=(WrongAnimal const & rhs);
        std::string getType() const;
};


#endif