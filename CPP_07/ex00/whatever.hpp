/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:35:03 by gscala            #+#    #+#             */
/*   Updated: 2021/10/13 10:07:37 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y){
    T c = y;
    y = x;
    x = c;
}
template <typename T>
T min(T &x, T &y){
    if (x == y)
        return(y);
    else if(x > y)
        return (y);
    return(x);
}
template <typename T>
T max(T &x, T &y){
    if (x == y)
        return(y);
    else if(x > y)
        return (x);
    return(y);
}



#endif