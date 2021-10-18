/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:48:33 by gscala            #+#    #+#             */
/*   Updated: 2021/10/15 12:05:55 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    unsigned int n = 5;

    std::cout << "Constructing an array with no parameters and printing out length: " << std::endl;
    Array<int>array0;
    std::cout << "length: " << array0.size() << std::endl;


    std::cout << "Constructing array with unsigned int as parameter and printing out lenght: " << std::endl;
    Array<int> ar(n);
    std::cout << "length: " << ar.size() << std::endl;

    std::cout << "Constructing new_array with = operator overload: " << std::endl;
    Array<int> new_array = ar;
    std::cout << "length: " << new_array.size() << std::endl;

    std::cout << "Using copy constructor: " << std::endl;
    Array<int>copy_array(ar);
    std::cout << "length: " << copy_array.size() << std::endl;
    std::cout << "Trying to access elements in array with [] using wrong index:" << std::endl;
    try{
        std::cout << ar.operator[](6);
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "Trying to access elements in array with [] using right index:" << std::endl;
    try{
        std::cout << ar.operator[](2);
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }

}