/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:59 by gscala            #+#    #+#             */
/*   Updated: 2021/09/30 18:17:22 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, unsigned int grade_sign, unsigned int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec){
    std::cout << "Parametric constructor called and variables initialized" << std::endl;
}

void Form::beSigned(Bureaucrat & bur){
    if (bur.getGrade() <= _grade_sign){
        _sign = true;
        std::cout << bur.getName() << " is signing " << this->_name << std::endl;}
    else
        throw GradeTooLowException();
}

Form::~Form(){
};

std::string Form::getName(void){
    return(this->_name);
}

unsigned int Form::getSign(){
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

//need ostream