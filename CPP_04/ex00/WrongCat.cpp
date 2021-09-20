/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:49:48 by gscala            #+#    #+#             */
/*   Updated: 2021/09/15 13:50:24 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "Standard constructor called for WrongCat class" << std::endl; 
}

WrongCat::WrongCat(std::string type){
    this->_type = type;
    std::cout << "Parametric constructor called for " << _type << " of WrongCat class" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "Destructor called for " << _type << " of WrongCat class" << std::endl;
}

void    WrongCat::makeSound() const{
    std::cout << "This " << _type << " says 'Meow Meow Meow' " << std::endl;
}

WrongCat::WrongCat(WrongCat & src){
    std::cout << "->WrongCat copy constructor called<-" << std::endl;
    *this = src;
    return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs) {
	std::cout << "->WrongCat assignation operator called<-" << std::endl;
	this->_type = rhs._type;
	return (*this);
}