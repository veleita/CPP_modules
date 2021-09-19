/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:35:32 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/19 18:10:29 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << "GOOD ANIMAL" << std::endl;
	std::cout << "--------------------" << std::endl;
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
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "WRONG ANIMAL" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "CONSTRUCTORS:" << std::endl;
	const WrongAnimal* wMeta = new WrongAnimal();
	const WrongAnimal* wPuppy = new WrongDog();
	const WrongAnimal* wKitten = new WrongCat();
	std::cout << std::endl;
	
	
	std::cout << "TYPES:" << std::endl;
	std::cout << wPuppy->getType() << " " << std::endl;
	std::cout << wKitten->getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << "MAKE SOUND:" << std::endl;
	wPuppy->makeSound();
	wKitten->makeSound();
	wMeta->makeSound();
	std::cout << std::endl;

	std::cout << "DESTRUCTORS:" << std::endl;
	delete wMeta;
	delete wPuppy;
	delete wKitten;
	return (0);
}
