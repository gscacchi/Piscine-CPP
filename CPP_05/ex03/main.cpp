/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:13:09 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 17:00:54 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void){

    Intern someIntern;
	Form *form;

	form = someIntern.makeForm("Robotomy Request", "Robot");
	std::cout << " --- " << std::endl;
	
	form = someIntern.makeForm("Presidential Pardon", "Presidential");
	std::cout << " --- " << std::endl;
	try {
		form = someIntern.makeForm("Wrong Form Type", "Bad");
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}