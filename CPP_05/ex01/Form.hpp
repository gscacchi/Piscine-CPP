/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:13:02 by gscala            #+#    #+#             */
/*   Updated: 2021/10/01 11:50:32 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"


#include <string>
#include <iostream>

class Bureaucrat;

class Form{
    private:
        const std::string _name;
        bool     _sign;
        const unsigned int _grade_sign;
        const unsigned int _grade_exec;
    public:
        Form(std::string name, unsigned int grade_sign, unsigned int grade_exec);
        ~Form();
        void beSigned(Bureaucrat & bur);
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
        std::string getName(void);
        bool getSign();
        unsigned int getGradeSign();
        unsigned int getGradeExec();
        
};

std::ostream & operator<<(std::ostream &os, Form &form);

#endif