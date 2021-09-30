/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:42:23 by gscala            #+#    #+#             */
/*   Updated: 2021/09/30 16:15:14 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(){

	std::cout << "EXCEPTIONS FOR INVALID PARAMETRIC CONSTRUCTORS: " << std::endl;
    try {
		Bureaucrat troppoalto("Maria", 0);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; 
	}
	try{
		Bureaucrat troppobasso("Gigi", 152);
	}
	catch (std::exception& g){
		std::cout << g.what() <<std::endl;
	}

	std::cout << "EXCEPTIONS FOR INVALID INCREMENT OR DECREMENT: " << std::endl;

	Bureaucrat altino("Paolo", 2);
	try{
		altino.incrementGrade();
		altino.incrementGrade();
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	Bureaucrat bassino("Carlo", 149);
	try{
		bassino.decrementGrade();
		bassino.decrementGrade();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "PRINTING BY << OVERLOAD:" << std::endl;
	std::cout << altino;
	std::cout << bassino << std::endl;
	
}