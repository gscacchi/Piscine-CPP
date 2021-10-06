/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:34:55 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 14:45:22 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target){
}

void    ShrubberyCreationForm::printForm(void) const{
    std::ofstream o1(_target + "_shrubbery");
    o1 << "\n\
               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&\%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n\
	                  |\\              \n\
	      ___________/  \\____________ \n\
	     /  e alloraaaaaaaaaaaaaaaaa? | \n\
	     \\___________________________/ \n\
	\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

std::string ShrubberyCreationForm::getTarget(){
    return (this->_target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) : Form(src){
    *this = src;
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	this->_target = rhs._target;
	return (*this);
}