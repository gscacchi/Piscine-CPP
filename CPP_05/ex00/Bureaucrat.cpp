/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:03:29 by gscala            #+#    #+#             */
/*   Updated: 2021/09/22 16:03:25 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade){
    std::cout << "Parametric constructor called\n";
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor called for " << this->_name;
}

std::string Bureaucrat::getName(){
    return(this->_name);
}

unsigned int Bureaucrat::getGrade(){
    return(this->_grade);
}



