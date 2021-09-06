/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:32:54 by gscala            #+#    #+#             */
/*   Updated: 2021/09/06 16:32:55 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed(int const integer){
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = integer << this->_fraction;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src){

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(float const floatingPoint){

	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(floatingPoint * (1 << this->_fraction));
}


Fixed & Fixed::operator=(Fixed const & copy){

	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = copy._fixed;
	return(*this);
}

int 	Fixed::getRawBits(void) const{
	return(this->_fixed);
}

int		Fixed::getFractBits (void) const {
	return this->_fraction;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "SetRawBits member function called" << std::endl;
	this->_fixed = raw;
}

float	Fixed::toFloat(void) const{
	return((float) this->getRawBits() / (1 << this->getFractBits()));
}

int 	Fixed::toInt(void) const{
	return(this->getRawBits() >> this->getFractBits());
}

std::ostream & operator<<(std::ostream & stream, Fixed const & rhs) {
	stream << (rhs.toFloat());
	return (stream);
}
