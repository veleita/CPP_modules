/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:52:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/07 19:34:13 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	std::cout << "CONSTRUCTORS" << std::endl;
	std::cout << "--------------------" << std::endl;
	const Dog* doggo = new Dog();
	const Cat* puss = new Cat();
	std::cout << "--------------------" << std::endl;

	const Animal *array[2];

	array[0] = doggo;
	array[1] = puss;

	Brain*	dogBrain = doggo->getBrain();
	Brain*	catBrain = puss->getBrain();

	std::cout << std::endl << "DEEP COPY" << std::endl;
	std::cout << "--------------------" << std::endl;
	dogBrain->setIdeas(0, "I wanna play! Can we play?");
	catBrain->setIdeas(0, "I'm hungry");

	const Dog	*dogCopy = new Dog(*doggo);
	const Cat	*catCopy = new Cat(*puss);

	Brain*	dogCopyBrain = dogCopy->getBrain();
	Brain*	catCopyBrain = catCopy->getBrain();

	std::cout << "ORIGINAL" << std::endl;
	std::cout << "Dog brain address: " << &(dogCopyBrain) << std::endl; 
	std::cout <<  "Brain content: " << dogBrain->getIdeas(0) << std::endl; 
	std::cout << "Cat brain address: " << &(dogCopyBrain) << std::endl; 
	std::cout <<  "Brain content: " << catBrain->getIdeas(0) << std::endl; 
	std::cout << "COPY" << std::endl;
	std::cout << "Dog copy brain address: " << &(dogCopyBrain) << std::endl; 
	std::cout << "Brain content: " << dogCopyBrain->getIdeas(0) << std::endl; 
	std::cout << "Cat copy brain address: " << &(dogCopyBrain) << std::endl; 
	std::cout <<  "Brain content: " << catCopyBrain->getIdeas(0) << std::endl; 
	std::cout << std::endl;

	dogBrain->setIdeas(0, "Humans are awesome");
	catBrain->setIdeas(0, "Don't touch me or I'll get angry");

	std::cout << "ORIGINAL" << std::endl;
	std::cout <<  "Brain content: " << dogBrain->getIdeas(0) << std::endl; 
	std::cout <<  "Brain content: " << catBrain->getIdeas(0) << std::endl; 
	std::cout << "COPY" << std::endl;
	std::cout <<  "Brain content: " << dogCopyBrain->getIdeas(0) << std::endl; 
	std::cout <<  "Brain content: " << catCopyBrain->getIdeas(0) << std::endl; 
	std::cout << "--------------------" << std::endl;
	
	std::cout << std::endl << "DESTRUCTORS" << std::endl;
	std::cout << "--------------------" << std::endl;
	for (int i = 0; i < 2; i++)
		delete array[i];
	std::cout << "--------------------" << std::endl;

	return 0;
}
