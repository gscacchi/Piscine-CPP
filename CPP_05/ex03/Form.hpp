/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:13:02 by gscala            #+#    #+#             */
/*   Updated: 2021/10/06 15:06:57 by gscala           ###   ########.fr       */
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
        virtual ~Form();
        Form(Form & src);
        void beSigned(Bureaucrat & bur);
        void execute(Bureaucrat const & executor) const;

        Form & operator=(Form const & rhs);
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
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
        std::string getName(void);
        bool getSign();
        unsigned int getGradeSign();
        unsigned int getGradeExec() const;
        virtual void printForm() const = 0;
};

std::ostream & operator<<(std::ostream &os, Form &form);

#endif