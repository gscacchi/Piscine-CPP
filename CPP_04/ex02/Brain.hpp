/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:30:16 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 15:30:20 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(int index, std::string idea);
	Brain(Brain & src);
	virtual ~Brain();

	Brain & operator=(Brain const & rhs);

	void setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
};

#endif