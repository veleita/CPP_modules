/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:35:32 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 16:17:31 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	std::cout << "CONSTRUCTORS:" << std::endl;
	const Animal* meta = new Animal();
	const Animal* puppy = new Dog();
	const Animal* kitten = new Cat();
	std::cout << std::endl;
	
	std::cout << "TYPES:" << std::endl;
	std::cout << puppy->getType() << " " << std::endl;
	std::cout << kitten->getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << "MAKE SOUND:" << std::endl;
	puppy->makeSound();
	kitten->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "DESTRUCTORS:" << std::endl;
	delete meta;
	delete puppy;
	delete kitten;

	return (0);
}
