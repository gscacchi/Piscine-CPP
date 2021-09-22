/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:58:09 by gscala            #+#    #+#             */
/*   Updated: 2021/09/22 16:18:55 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    private:
        const std::string _name;
        unsigned int _grade;
    public:
        Bureaucrat(std::string name, unsigned int grade);
        ~Bureaucrat();
        std::string    getName();
        unsigned int    getGrade();
};


#endif