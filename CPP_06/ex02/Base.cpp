/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:49:59 by gscala            #+#    #+#             */
/*   Updated: 2021/10/12 18:48:07 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
    srand(time(NULL));
    switch (rand() % 3)
    {
        case 0 : 
            std::cout << "creating type a..." << std::endl;
            return(new A);
        case 1 :
            std::cout << "creating type b..." << std::endl;
            return(new B);
        case 2 :
            std::cout << "creating type c..." << std::endl;
            return(new C);
    }
    return(NULL);
}

Base::~Base(){
    std::cout << "base being destructed" << std::endl;
}

void identify(Base* p){
    if (dynamic_cast <A*> (p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast <B*> (p))
        std::cout << "B\n";
    else if (dynamic_cast <C*>(p))
        std::cout << "C\n";
}

void identify(Base& p){

    try{
        A refA = dynamic_cast<A&>(p);
        std::cout << "Reference: A\n";
    }
    catch(const std::exception& e)
    {
        try
        {
            B refB = dynamic_cast<B&>(p);
            std::cout << "Reference B\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "Reference: C\n";
        }
    }
}