/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:58:09 by gscala            #+#    #+#             */
/*   Updated: 2021/09/30 14:03:13 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat{
    private:
        const std::string _name;
        unsigned int _grade;
    public:
        Bureaucrat(std::string name, unsigned int grade);
        ~Bureaucrat();
        std::string    getName() const;
        unsigned int    getGrade() const;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
        void incrementGrade();
        void decrementGrade();
};

std::ostream & operator<<(std::ostream &os, const Bureaucrat &bureaucrat);


#endif