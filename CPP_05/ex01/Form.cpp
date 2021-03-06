/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:59 by gscala            #+#    #+#             */
/*   Updated: 2021/10/01 11:15:16 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, unsigned int grade_sign, unsigned int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec){
    std::cout << "Parametric constructor called for Form " << this->_name << std::endl;
}

void Form::beSigned(Bureaucrat & bur){
    if (bur.getGrade() <= _grade_sign){
        _sign = true;
        std::cout << bur.getName() << " is signing " << this->_name << std::endl;}
    else
        throw GradeTooLowException();
}

Form::~Form(){
    std::cout << "Destructor called for form " << this->_name << std::endl;
};

std::string Form::getName(void){
    return(this->_name);
}

bool Form::getSign(){
    return(this->_sign);
}

unsigned int Form::getGradeSign(){
    return(this->_grade_sign);
}

unsigned int Form::getGradeExec(){
    return(this->_grade_exec);
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade of bureaucrat is too low! " ;
}

std::ostream & operator<<(std::ostream &os, Form &form) {
    if (form.getSign() == true)
        os << "The form " << form.getName() << " has been signed" << std::endl;
    else
        os << "The form " << form.getName() << " has not been signed" << std::endl;
	return os;
}