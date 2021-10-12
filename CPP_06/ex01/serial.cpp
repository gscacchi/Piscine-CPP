/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:03:09 by gscala            #+#    #+#             */
/*   Updated: 2021/10/12 16:58:59 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

uintptr_t serialize(Data* ptr){
    uintptr_t t = reinterpret_cast<uintptr_t>(ptr);
    return(t);
}

Data* deserialize(uintptr_t raw){
    Data* r = reinterpret_cast<Data*>(raw);
    return(r);
}