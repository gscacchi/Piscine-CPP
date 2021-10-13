/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:28:42 by gscala            #+#    #+#             */
/*   Updated: 2021/10/13 10:43:45 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int     main(){
    int foo[5] = {15, 25, 10, 20, 4};
    std::string boo[3] = {"ciao", "scemino", "scemotto"};

    iter(foo, sizeof(foo) / 4, ft_print);
    iter(boo, sizeof(boo)/sizeof(boo[0]), ft_print);
    
}