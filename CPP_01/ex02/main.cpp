/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:42:18 by gscala            #+#    #+#             */
/*   Updated: 2021/08/31 11:42:21 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int     main(void)
{
    std::string string = "HI THIS IS BRAIN";

    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "display address in memory of the string: " << &string << std::endl;
    std::cout << "display address in memory of the string using PTR: " << stringPTR << std::endl;
    std::cout << "display address in memory of the string using REF: " << &stringREF << std::endl;
    std::cout << "display string using PTR: " << *stringPTR << std::endl;
    std::cout << "display string using REF: " << stringREF << std::endl;

}
