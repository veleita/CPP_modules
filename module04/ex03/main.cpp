/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:52:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/19 18:06:14 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "BASIC MATERIA" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	Cure 	*cure = new Cure();
	Ice		*ice = new Ice();
	
	std::cout << cure->getType() << std::endl;
	std::cout << ice->getType() << std::endl;


	AMateria 	*cureCpy = new Cure(*cure);
	AMateria	*iceCpy = new Ice(*ice);
	
	std::cout << cureCpy->getType() << " copy" << std::endl;
	std::cout << iceCpy->getType() << " copy" << std::endl;

	delete cure;
	delete ice;
	delete cureCpy;
	delete iceCpy;

	std::cout << std::endl;


	std::cout << "CHARACTER CONSTRUCTORS" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	ICharacter	*IWarrior = new Warrior();
	ICharacter	*IMage = new Mage();
	
	std::cout << IWarrior->getName() << std::endl;
	std::cout << IMage->getName() << std::endl;


	Warrior	*warrior;
	warrior = (Warrior*) IWarrior;				// Type casts
	Mage *mage;
	mage = (Mage*) IMage;


	Warrior	*warriorCpy = new Warrior(*warrior);
	Mage	*mageCpy = new Mage(*mage);
	
	std::cout << warriorCpy->getName() << std::endl;
	std::cout << mageCpy->getName() << std::endl;


	std::cout << std::endl;


	std::cout << "MATERIA SOURCE CONSTRUCTORS" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	Grimoire	grimoire = Grimoire();
	Grimoire	grimoireCpy = Grimoire(grimoire);

	std::cout << std::endl;


	std::cout << "LEARN MATERIA" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	grimoire.learnMateria(new Ice());
	grimoire.learnMateria(new Cure());

	std::cout << std::endl;


	std::cout << "CREATE AND EQUIP MATERIA" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	AMateria	*spell;

	spell = grimoire.createMateria("ice");
	warrior->equip(spell);
	std::cout << std::endl;
	spell = grimoire.createMateria("cure");
	mage->equip(spell);
	std::cout << std::endl;
	spell = grimoire.createMateria("ice");
	mage->equip(spell);

	std::cout << std::endl;


	std::cout << "UNEQUIP MATERIA" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	mage->unequip(0);
	std::cout << std::endl;


	std::cout << "DEEP COPY:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	spell = grimoire.createMateria("cure");
	mageCpy->equip(spell);

	std::cout << std::endl;


	std::cout << "USE MATERIA:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	warrior->use(0, *mage);
	std::cout << std::endl;

	mage->use(0, *mage);

	std::cout << std::endl;


	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	delete warrior;
	delete mage;
	delete warriorCpy;
	delete mageCpy;

/* DO NOT DELETE MATERIAS, THE MATERIAS GET DELETED WHEN THE CHAR THAT HAS THEM EQUIPED IS DELETED */

	return (0);
}
