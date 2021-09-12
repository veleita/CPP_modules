/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:52:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/12 20:13:45 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "Character.hpp"

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

	ICharacter	*IWarrior = new Warrior();
	ICharacter	*IMage = new Mage();
	
	std::cout << IWarrior->getName() << std::endl;
	std::cout << IMage->getName() << std::endl;

	std::cout << std::endl;


	std::cout << "CHARACTER COPY CONSTRUCTORS:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	Warrior	*warrior;
	warrior = (Warrior*) IWarrior;				// Type casts
	Mage *mage;
	mage = (Mage*) IMage;

	Warrior	*warriorCpy = new Warrior(*warrior);
	Mage	*mageCpy = new Mage(*mage);
	
	std::cout << warriorCpy->getName() << std::endl;
	std::cout << mageCpy->getName() << std::endl;

	std::cout << std::endl;


	std::cout << "CLONE MATERIA:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	AMateria	*iceClone	= ice->clone();
	AMateria	*cureClone	= cure->clone();

	std::cout << cureClone->getType() << std::endl;
	std::cout << iceClone->getType() << std::endl;

	std::cout << std::endl;


	std::cout << "EQUIP MATERIA:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	warrior->equip(ice);
	std::cout << std::endl;
	mage->equip(cure);
	std::cout << std::endl;
	mage->equip(ice);
	std::cout << std::endl;


	std::cout << "UNEQUIP MATERIA:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	mage->unequip(1);
	std::cout << std::endl;


	std::cout << "DEEP COPY:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	warriorCpy->equip(cure);
	std::cout << std::endl;
	mageCpy->equip(cure);

	std::cout << std::endl;


	std::cout << "USE MATERIA:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	warrior->use(0, *mage);
	std::cout << std::endl;
	mage->use(0, *mage);

	delete cure;
	delete ice;
	delete cureCpy;
	delete iceCpy;
	delete warrior;
	delete mage;
	delete warriorCpy;
	delete mageCpy;
	delete iceClone;
	delete cureClone;

	return (0);
}
