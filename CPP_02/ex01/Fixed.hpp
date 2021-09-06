/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:32:48 by gscala            #+#    #+#             */
/*   Updated: 2021/09/06 16:32:49 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>
#include <cmath>

class   Fixed{
    private:
        int _fixed;
        static const int _fraction = 8;
    public:
        Fixed(); //default constructor
        Fixed(int const fixed);  ///costruttore parametrico
        Fixed(Fixed const & src); //copy constructor
        Fixed(float const floatingPoint); //takes constant floating point and converts it to correspondent fixed(8) point value
        Fixed & operator=(Fixed const & copy);
        ~Fixed();
        int getRawBits(void) const; //returns raw value of fixed point value
        int getFractBits(void) const;
        void setRawBits(int const raw); //sets the raw value of fixed point value
        float   toFloat(void) const; 
        int     toInt(void) const;
};

std::ostream & operator<<(std::ostream & COUT, Fixed const & rhs);

#endif
