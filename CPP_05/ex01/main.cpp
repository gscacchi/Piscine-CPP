/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:13:09 by gscala            #+#    #+#             */
/*   Updated: 2021/10/01 11:57:05 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
    Form test("test", 10, 20);
    Bureaucrat bur("Gigi", 11);

    std::cout << "TEST WITH OVERLOAD BEFORE SIGNING " << std::endl;
    std::cout << test;

    std::cout << "TRYING TO SIGN FORM" << std::endl;
    try{
        test.beSigned(bur);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    bur.incrementGrade();
     try{
        test.beSigned(bur);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    //bur.decrementGrade();
    std::cout << "SIGN FORM TEST: " << std::endl;
    bur.signForm(test);
    std::cout << "TEST WITH OVERLOAD AFTER SIGNING " << std::endl;
    std::cout << test;
}