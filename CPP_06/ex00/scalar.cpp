/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:01:22 by gscala            #+#    #+#             */
/*   Updated: 2021/10/11 15:42:53 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

Convert::Convert(){

};

Convert::~Convert(){


};

Convert::Convert(std::string value): _value(value){
    float valore = atof(_value.c_str());
    toChar(valore);
    toInt(valore);
    toFloat(valore);
    toDouble(valore);
};

void Convert::toChar(float value){
    char print = static_cast<char>(value);
    std::cout << "Char: ";
    if (value < CHAR_MIN || value > CHAR_MAX || isnan(value))
		std::cout << "impossible";
    else if (isprint(print))
        std::cout << print;
    else
        std::cout << "not displayable";
    std::cout << std::endl;
}

void Convert::toInt(float value){
    int print = static_cast<int>(value);
    std::cout << "Int: ";
    if (value < INT_MIN || value > INT_MAX || isnan(value))
		std::cout << "impossible";
    else
        std::cout << print;
    std::cout << std::endl;
}

void Convert::toFloat(float value){
    std::string appendix = ((value - static_cast<int>(value)) != 0 ? "" : ".0");
	std::cout << "float: " << value << appendix << "f" << std::endl;
}

void Convert::toDouble(float value){
    double print = static_cast<double>(value);
    std::cout << "Double: " << print << std::endl;
}


