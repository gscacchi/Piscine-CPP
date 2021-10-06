/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:46:58 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 15:46:37 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade){
    std::cout << "Parametric constructor called for Bureaucrat " << this->_name << std::endl;
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

void Bureaucrat::signForm(Form &form){
    std::cout << "trying to sign form..." << std::endl;
    if (_grade <= form.getGradeSign())
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    else
        std::cout << this->_name << " cannot sign form because grade is too low" << std::endl;
}

void Bureaucrat::executeForm(Form const & form){
    if (this->_grade <= form.getGradeExec()){
        std::cout << "Bureaucrat executes form\n";
        form.execute(*this);}
    else{
        std::cout << "exception has occurred\n";
        throw Form::GradeTooLowException();}
}

std::ostream & operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << "The Bureaucrat " << bureaucrat.getName() << " has a grade of " << bureaucrat.getGrade() << std::endl;
	return os;
}

