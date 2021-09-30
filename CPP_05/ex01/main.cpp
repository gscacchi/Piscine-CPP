/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:13:09 by gscala            #+#    #+#             */
/*   Updated: 2021/09/30 17:29:27 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
    Form test("test", 10, 20);
    Bureaucrat bur("Gigi", 8);
    try{
        test.beSigned(bur);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}