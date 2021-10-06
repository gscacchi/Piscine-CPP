/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:31:56 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 14:42:47 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5), _target(target){

};

PresidentialPardonForm::~PresidentialPardonForm(){

};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src) : Form(src){
    *this = src;
    return ;
}

void PresidentialPardonForm::printForm(void) const{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
    this->_target = rhs._target;
    return(*this);
}

