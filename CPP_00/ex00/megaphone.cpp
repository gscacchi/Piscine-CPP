/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:54:42 by gscala            #+#    #+#             */
/*   Updated: 2021/09/14 15:47:02 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int argc, char **argv)
{
    int i;
    int k;
    char c;

    i = 1;
    k = 0;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    while (i < argc)
    {
        while (argv[i][k])
        {
            c = toupper(argv[i][k]);
            std::cout << c;
            k++;
        }
        i++;
        k = 0;
    }
    std::cout << "\n";
}
