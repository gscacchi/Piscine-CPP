/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:50:06 by gscala            #+#    #+#             */
/*   Updated: 2021/09/03 15:50:08 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <iostream>
#include <fstream>

class Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
	void error(void);
public:
	void complain(std::string level);
	Karen::Karen();
};


#endif

