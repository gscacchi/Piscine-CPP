/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:51:41 by gscala            #+#    #+#             */
/*   Updated: 2021/10/12 16:51:47 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

int main()
{
	Data *data = new Data;

	std::cout << sizeof(*data) << std::endl;
	std::cout << "Address data: " << data << std::endl;
	std::cout << "Ptr: " << serialize(data) << std::endl;
	std::cout << "Address data: " << deserialize(serialize(data)) << std::endl;

	delete data;

	return (0);
}