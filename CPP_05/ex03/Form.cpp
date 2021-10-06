/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:57:59 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 15:45:50 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, unsigned int grade_sign, unsigned int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec){
    std::cout << "Parametric constructor called for Form " << this->_name << std::endl;
}

Form::Form(Form & src) : _name(src._name), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){
    *this = src;
    return;
}

Form & Form::operator=(Form const & rhs){
    this->_sign = rhs._sign;
    return(*this);
}

void Form::beSigned(Bureaucrat & bur){
    if (bur.getGrade() <= _grade_sign){
        _sign = true;
        std::cout << bur.getName() << " is signing " << this->_name << std::endl;}
    else {
        throw GradeTooLowException();
        _sign = false; }
}

void Form::execute(Bureaucrat const & executor) const{
    if (_sign == true && executor.getGrade() <= _grade_exec){
        std::cout << executor.getName() << " is executing " << this->_name << std::endl;
        printForm();
    }
    if (_sign == false)
    {
        throw FormNotSignedException();}
    if (executor.getGrade() > _grade_exec){
        throw GradeTooLowException();
    }
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

unsigned int Form::getGradeExec() const{
    return(this->_grade_exec);
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade of bureaucrat is too low! "  ;
}

const char* Form::FormNotSignedException::what() const throw(){
    return "Form hasn't been signed yet! " ;
}

std::ostream & operator<<(std::ostream &os, Form &form) {
    if (form.getSign() == true)
        os << "The form " << form.getName() << " has been signed" << std::endl;
    else
        os << "The form " << form.getName() << " has not been signed" << std::endl;
	return os;
}