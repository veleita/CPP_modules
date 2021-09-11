/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:52:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/11 20:11:22 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

int main()
{
	std::cout << "MATERIA CONSTRUCTORS:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	Cure 	*cure = new Cure();
	Ice		*ice = new Ice();
	
	std::cout << cure->getType() << std::endl;
	std::cout << ice->getType() << std::endl;

	std::cout << std::endl;


	std::cout << "MATERIA COPY CONSTRUCTORS:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	AMateria 	*cureCpy = new Cure(*cure);
	AMateria	*iceCpy = new Ice(*ice);
	
	std::cout << cureCpy->getType() << std::endl;
	std::cout << iceCpy->getType() << std::endl;

	std::cout << std::endl;


	std::cout << "CHARACTER CONSTRUCTORS:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	ICharacter	*warrior = new Warrior();
	ICharacter	*mage = new Mage();
	
	std::cout << warrior->getName() << std::endl;
	std::cout << mage->getName() << std::endl;

	std::cout << std::endl;


	std::cout << "USE MATERIA:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	cure->use(*warrior);
	ice->use(*warrior);

	std::cout << std::endl;


	std::cout << "CLONE MATERIA:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	AMateria	*iceClone	= ice->clone();
	AMateria	*cureClone	= cure->clone();

	std::cout << cureClone->getType() << std::endl;
	std::cout << iceClone->getType() << std::endl;


	delete cure;
	delete ice;
	delete cureCpy;
	delete iceCpy;
	delete warrior;
	delete iceClone;
	delete cureClone;

	return (0);
}
