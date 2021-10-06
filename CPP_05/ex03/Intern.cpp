/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:05:02 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 16:59:48 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	_formType[0] = "Presidential Pardon";
	_formType[1] = "Robotomy Request";
	_formType[2] = "Shrubbery Creation";
}

Intern::~Intern() { }

Intern::Intern(Intern & src) {
	*this = src;
	return ;
}

Intern & Intern::operator=(Intern const & rhs) {
	for (int i = 0; i < 3; i++)
		_formType[i] = rhs._formType[i];
	return (*this);
}

const char* Intern::FormDoesNotExist::what() const throw() {
	return "Error! Form does not exist!";
}

Form * Intern::createForm(std::string formtarget, int i) {
	Form *form[3];
	Form *temp;

	form[0] = new PresidentialPardonForm(formtarget);
	form[1] = new RobotomyRequestForm(formtarget);
	form[2] = new ShrubberyCreationForm(formtarget);
	temp = form[i];
	for (int i = 0; i < 3; i++)
		delete form[i];
	return (temp);
}

Form * Intern::makeForm(std::string formName, std::string formTarget) {
	Form *form = nullptr;
	for (int i = 0; i < 3; i++)
	{
		if (formName == _formType[i])
		{
			form = createForm(formTarget, i);
			std::cout << "Intern creates " << _formType[i] << " form. What a good job!" << std::endl;
			return (form);
		}
	}
	throw FormDoesNotExist();
}