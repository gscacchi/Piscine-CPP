/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:48:33 by gscala            #+#    #+#             */
/*   Updated: 2021/10/13 16:40:42 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    unsigned int n = 5;

    std::cout << "Constructing an array with no parameters and printing out length: " << std::endl;
    Array<int>array0;
    std::cout << "length: " << array0.getLength() << std::endl;


    std::cout << "Constructing array with unsigned int as parameter and printing out lenght: " << std::endl;
    Array<int> ar(n);
    std::cout << "length: " << ar.getLength() << std::endl;

    std::cout << "Constructing new_array with = operator overload: " << std::endl;
    Array<int> new_array = ar;
    std::cout << "length: " << new_array.getLength() << std::endl;

    std::cout << "using copy constructor: " << std::endl;
    Array<int>copy_array(ar);
    std::cout << "length: " << copy_array.getLength() << std::endl;
}