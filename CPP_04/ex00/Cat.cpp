/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:30:51 by gscala            #+#    #+#             */
/*   Updated: 2021/09/15 13:33:00 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Standard constructor called for Cat class" << std::endl; 
}

Cat::Cat(std::string type){
    this->_type = type;
    std::cout << "Parametric constructor called for " << _type << " of Cat class" << std::endl;
}

Cat::~Cat(){
    std::cout << "Destructor called for " << _type << " of Cat class" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "This " << _type << " says 'Meow Meow Meow' " << std::endl;
}

Cat::Cat(Cat & src){
    std::cout << "->Cat copy constructor called<-" << std::endl;
    *this = src;
    return ;
}

Cat & Cat::operator=(Cat const & rhs) {
	std::cout << "->Cat assignation operator called<-" << std::endl;
	this->_type = rhs._type;
	return (*this);
}