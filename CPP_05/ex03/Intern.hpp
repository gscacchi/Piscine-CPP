/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:01:59 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 16:59:48 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string _formType[3];
public:
	Intern();
	~Intern();

	Intern(Intern & src);

	Intern & operator=(Intern const & rhs);

	Form * createForm(std::string target, int i);

	Form * makeForm(std::string formName, std::string formTarget);

	class FormDoesNotExist : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif