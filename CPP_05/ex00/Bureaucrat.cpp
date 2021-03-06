/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:03:29 by gscala            #+#    #+#             */
/*   Updated: 2021/09/30 14:03:17 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade){
    std::cout << "Parametric constructor called\n";
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor called for " << this->_name << std::endl;
}

std::string Bureaucrat::getName() const{
    return(this->_name);
}

unsigned int Bureaucrat::getGrade() const{
    return(this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too high !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low !";
}

void Bureaucrat::incrementGrade(){
    if (_grade == 1)
        throw GradeTooHighException();
    this->_grade -= 1;
    std::cout << "Grade of " << this->_name << " has incremented to " << this->_grade << std::endl;
}

void Bureaucrat::decrementGrade(){
    if (_grade == 150)
        throw GradeTooLowException();
    this->_grade += 1;
    std::cout << "Grade of " << this->_name << " has decremented to " << this->_grade <<std::endl;
}

std::ostream & operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << "The Bureaucrat " << bureaucrat.getName() << " has a grade of " << bureaucrat.getGrade() << std::endl;
	return os;
}


