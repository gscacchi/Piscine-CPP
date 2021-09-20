/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscala <gscala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:32:39 by gscala            #+#    #+#             */
/*   Updated: 2021/09/20 16:03:25 by gscala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;


	Dog doggo;
	Cat kitten;
	
	for (int i = 0; i < 100; i++) {
		if (i % 5) {
			doggo.setIdea(i, "Eat");
			kitten.setIdea(i, "Knocking things off the table");
		}
		else {
			doggo.setIdea(i, "Sleep");
			kitten.setIdea(i, "Conquer the world");
		}
	}
	
	const Animal* zoo[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2)
			zoo[i] = new Dog(doggo);
		else
			zoo[i] = new Cat(kitten);
	}

	std::cout << doggo.getIdea(9) << std::endl;
	std::cout << doggo.getIdea(5) << std::endl;
	std::cout << kitten.getIdea(85) << std::endl;
	std::cout << kitten.getIdea(99) << std::endl;

	doggo.setIdea(55, "Play");
	kitten.setIdea(55, "Hiss at things");
	std::cout << doggo.getIdea(55) << std::endl;
	std::cout << kitten.getIdea(55) << std::endl;


	for (int i = 0; i < 10; i ++) {
		delete zoo[i];
	}

	// ABSTRACT CLASS -> will give compiler error
	const Animal sesso;
	sesso->makeSound();
	

}