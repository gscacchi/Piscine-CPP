/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:13:09 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 15:55:27 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
    Bureaucrat bur("Burocrate", 40);
    Form *shrub = new ShrubberyCreationForm("shrub1");

    std::cout << "ATTEMPT TO SIGN AND EXECUTE A SHRUBBERY\n";
    try{
    shrub->beSigned(bur);}
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        shrub->execute(bur);}
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "ATTEMPT TO SIGN AND EXECUTE A ROBOTOMY REQUEST\n";
   Form *rob = new RobotomyRequestForm("robreq1");
   try{
        rob->beSigned(bur);
        rob->execute(bur);}
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "ATTEMPT TO SIGN AND EXECUTE A PARDON REQUEST\n";
   Form *pardon = new PresidentialPardonForm("Piergiorgio");
   try{
       pardon->beSigned(bur);
       pardon->execute(bur);
   }
   catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    delete shrub;
    delete rob;
    delete pardon;
}