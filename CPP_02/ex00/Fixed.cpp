/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:43:28 by gscala            #+#    #+#             */
/*   Updated: 2021/09/06 11:43:29 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called, fixed point value initialized to 0" << std::endl;
	this->_fixed = 0;
}

Fixed::~Fixed(){
	std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src){

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
 }


Fixed & Fixed::operator=(Fixed const & copy){

	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = copy._fixed;
	return(*this);
}

int 	Fixed::getRawBits(void) const{
	std::cout << "GetRawBits member function called" << std::endl;
	return(this->_fixed);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "SetRawBits member function called" << std::endl;
	this->_fixed = raw;
}