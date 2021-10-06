/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:36:20 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 14:43:43 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Request Form", 72, 45), _target(target){
}

RobotomyRequestForm::~RobotomyRequestForm(){
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : Form(src){
    *this = src;
    return ;
}

void    RobotomyRequestForm::printForm(void) const{
    std::cout << "<<< DRILLLLLLL NOISEEEEE >>>" << std::endl;
    std::srand(std::time(NULL));
    if ((std::rand() %2) == 0)
        std::cout << this->_target << " has been robotomized succesfully" << std::endl;
    else
        std::cout << " Robotomization has been a huge failure" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    this->_target = rhs._target;
    return(*this);
}