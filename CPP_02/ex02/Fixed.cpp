/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:39:37 by gscala            #+#    #+#             */
/*   Updated: 2021/09/07 17:21:34 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTORS  & DESTRUCTOR */
Fixed::Fixed() {
	Fixed::setRawBits(0);
}

Fixed::Fixed(int const integer) {
	this->_fixedPointValue = integer << this->_fractionalBits;
}

Fixed::Fixed(float const floatingPoint) {
	this->_fixedPointValue = roundf(floatingPoint * (1 << this->_fractionalBits));
}

Fixed::Fixed (Fixed const & src) {
	*this = src;
	return ;
}

Fixed::~Fixed() { }

/* OTHER FUNCTIONS */
int		Fixed::getRawBits (void) const {
	return this->_fixedPointValue;
}

void 	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

int		Fixed::getFractBits (void) const {
	return this->_fractionalBits;
}

float 	Fixed::toFloat(void) const {
	return ((float)this->getRawBits() / (1 << this->getFractBits()));
}

int 	Fixed::toInt(void) const {
	return(this->getRawBits() >> this->getFractBits());
}

Fixed & Fixed::min(Fixed &a, Fixed &b) {
	// it takes references on two fixed point values and returns a reference to the smallest value
	return (a.getRawBits() > b.getRawBits() ? b: a);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b) {
	// this overload takes references on two constant fixed point values and returns a reference to the smallest constant value
	return (a.getRawBits() > b.getRawBits() ? b: a);
}

Fixed & Fixed::max(Fixed &a, Fixed &b) {
	// it takes references on two fixed point values and returns a reference to the biggest value
	return (a.getRawBits() > b.getRawBits() ? a: b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b) {
	// this overload takes references on two constant fixed point values and returns a reference to the biggest constant value
	return (a.getRawBits() > b.getRawBits() ? a: b);
}

/* OPERATORS */
Fixed &	Fixed::operator=(Fixed const & rhs) {
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) {
	return (_fixedPointValue > rhs._fixedPointValue);
}

bool	Fixed::operator<(Fixed const & rhs) {
	return (_fixedPointValue < rhs._fixedPointValue);
}

bool	Fixed::operator>=(Fixed const & rhs) {
	return (_fixedPointValue >= rhs._fixedPointValue);
}

bool	Fixed::operator<=(Fixed const & rhs) {
	return (_fixedPointValue <= rhs._fixedPointValue);
}

bool	Fixed::operator==(Fixed const & rhs) {
	return (_fixedPointValue == rhs._fixedPointValue && _fractionalBits == rhs._fractionalBits);
}

bool	Fixed::operator!=(Fixed const & rhs) {
	return (_fixedPointValue != rhs._fixedPointValue ||  _fractionalBits != rhs._fractionalBits);
}

Fixed	Fixed::operator+(Fixed const & rhs) {
	Fixed temp;
	temp.setRawBits(_fixedPointValue + rhs._fixedPointValue);
	return (temp);
}

Fixed	Fixed::operator-(Fixed const & rhs) {
	Fixed temp;
	temp.setRawBits(_fixedPointValue - rhs._fixedPointValue);
	return (temp);
}

Fixed	Fixed::operator*(Fixed const & rhs) {
	Fixed temp;
	temp.setRawBits(((_fixedPointValue >> 0) * (rhs._fixedPointValue >> 0)) >> 8);
	return (temp);
}

Fixed	Fixed::operator/(Fixed const & rhs) {
	Fixed temp(this->toFloat() / rhs.toFloat());
	return (temp);
}

Fixed &	Fixed::operator++() {
	_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed &	Fixed::operator--() {
	_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	--*this;
	return temp;
}

std::ostream & operator<<(std::ostream & stream, Fixed const & rhs) {
	stream << (rhs.toFloat());
	return (stream);
}