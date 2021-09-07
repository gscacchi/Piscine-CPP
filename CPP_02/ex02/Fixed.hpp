/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:39:29 by gscala            #+#    #+#             */
/*   Updated: 2021/09/07 17:20:35 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
 #include <cmath>

class Fixed
{
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
public:
	Fixed();
	Fixed(int const integer);
	Fixed(float const floatingPoint);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		getFractBits (void) const;
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(Fixed const & rhs);
	bool	operator<(Fixed const & rhs);
	bool	operator>=(Fixed const & rhs);
	bool	operator<=(Fixed const & rhs);
	bool	operator==(Fixed const & rhs);
	bool	operator!=(Fixed const & rhs);

	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);

	Fixed &	operator++();
	Fixed 	operator++(int);
	Fixed &	operator--();
	Fixed 	operator--(int);


	static Fixed & max(Fixed &a, Fixed &b);
	static const Fixed & max(Fixed const &a, Fixed const &b);

	static Fixed & min(Fixed &a, Fixed &b);
	static const Fixed & min(Fixed const &a, Fixed const &b);
};

std::ostream & operator<<(std::ostream & COUT, Fixed const & rhs);

#endif