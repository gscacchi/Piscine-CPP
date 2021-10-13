/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:42:12 by gscala            #+#    #+#             */
/*   Updated: 2021/10/13 10:09:03 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main(void){
    int x = 5;
    int y = 3;

    char c = 'c';
    char d = 'd';

    std::cout << "<<<<<SWAP>>>>>" << std::endl;

    std::string bella = "bella";
    std::string brutta = "brutta";

    

    std::cout << "X before swap is " << x << std::endl;  
    std::cout << "Y before swap is " << y  << std::endl;
    
    swap(x, y);
    swap(c,d);
    swap(bella, brutta);

    std::cout << "X after swap is " << x << std::endl;  
    std::cout << "Y after swap is " << y  << std::endl;

    std::cout << "C is " << c << std::endl;
    std::cout << "D is " << d << std::endl;

    std::cout << "bella is " << bella << std::endl;
    std::cout << "brutta is " << brutta << std::endl << std::endl;

    std::cout << "<<<<<MIN>>>>>" << std::endl;

    int xx = 4;
    int yy = 2;

    std::cout << "min(xx,yy) = " << min(xx, yy) << std::endl;
    std::cout << "min(bella, brutta) = "<< min(bella, brutta) << std::endl;

    std::cout << "<<<<<MAX>>>>>" << std::endl;

    std::cout << "max(xx,yy) = " << max(xx, yy) << std::endl;
    std::cout << "max(bella, brutta) = "<< max(bella, brutta) << std::endl;



}