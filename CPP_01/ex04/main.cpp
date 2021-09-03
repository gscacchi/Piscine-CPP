/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:58:18 by gscala            #+#    #+#             */
/*   Updated: 2021/09/03 10:58:19 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int     main(int ac, char **av)
{
    std::fstream myFile;
    std::fstream newFile;
    std::string s1, s2, replace_name, line;

    if (ac != 4)
    {
        std::cout << "errore\n";
        exit(1);
    }
    std::string namefile = av[1];
    if (namefile.find(".txt") == std::string::npos)
    {
        std::cout << "error 2\n";
        exit(1);
    }
    s1 = av[2];
    s2 = av[3];

    myFile.open(namefile, std::ios::in);
    if (myFile.is_open())
    {
        replace_name = namefile.substr(0, ((namefile.length()-3)));
        replace_name += "replace.txt";
        newFile.open(replace_name, std::ios::out);
        while (std::getline(myFile, line))
        {
            int found = - 1;
            do {
                found = line.find(s1, found+1);
                if (found != - 1)
                {
                    line.erase(found, s1.length());
                    line.insert(found, s2);
                }
            } while (found != -1);
            newFile << line << std::endl;
        }
    }
    myFile.close();
    newFile.close();
}
