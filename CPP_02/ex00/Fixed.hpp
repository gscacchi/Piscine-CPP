/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:43:21 by gscala            #+#    #+#             */
/*   Updated: 2021/09/06 11:43:23 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>

class   Fixed{
    private:
        int _fixed;
        static const int _fraction = 8;
    public:
        Fixed(); //default constructor
        Fixed(int const fixed);  ///costruttore parametrico
        Fixed(Fixed const & src); //copy constructor
        Fixed & operator=(Fixed const & copy);
        ~Fixed();
        int getRawBits(void) const; //returns raw value of fixed point value
        void setRawBits(int const raw); //sets the raw value of fixed point value
};

#endif
