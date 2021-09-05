/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:52:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 18:31:39 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	const Animal* doggo = new Dog();
	const Animal* puss = new Cat();

	const Animal *array[2];

	array[0] = doggo;
	array[1] = puss;

	doggo.setIdeas(0, "I wanna play! Can we play?");
	puss.setIdeas(0, "I'm hungry");

	Dog	dogCopy(doggo);
	Cat	catCopy(puss);

	std::cout << doggo->getIdeas(0) << std::endl; 
	std::cout << puss->getIdeas(0) << std::endl; 
	std::cout << dogCopy->getIdeas(0) << std::endl; 
	std::cout << catCopy->getIdeas(0) << std::endl; 
	
	for (int i = 0; i < 2; i++)
		delete array[i];

	return 0;
}
