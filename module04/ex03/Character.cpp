/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:59:02 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/19 17:36:43 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


//------CONSTRUCTORS------//

Mage::Mage(): _name("Rasmodius")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Mage::Mage(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Mage::Mage(Mage const & copy)
{
	*this = copy;
}


Warrior::Warrior(): _name("Rufus")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Warrior::Warrior(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Warrior::Warrior(Warrior const & copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Mage const	&Mage::operator=(Mage const &rhs)
{
    this->_name = rhs.getName();
	
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}

    return (*this);
}

Warrior const	&Warrior::operator=(Warrior const &rhs)
{
    this->_name = rhs.getName();
	
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}

    return (*this);
}


//------GETTERS------//

std::string const &Mage::getName() const
{
    return this->_name;
}

std::string const &Warrior::getName() const
{
    return this->_name;
}


//------AUXILIARY FUNCTIONS------//

void	showInventory(AMateria *inventory[4])
{
	std::cout << "Actual inventory:" << std::endl;
	
	for (int i = 0; i < 4; ++i)
    {
		if (inventory[i])
			std::cout << inventory[i]->getType() << std::endl;
		else
			std::cout << "(empty)" << std::endl;
	}
}

//------CLASS METHODS------//

void	Mage::equip(AMateria* m)
{
	std::cout << "* Mage " << this->_name << " equips " << m->getType() \
		<< " *" << std::endl;

	for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break;
        }
    }

	showInventory(this->_inventory);
}

void 	Mage::unequip(int idx)
{
	std::cout << "* Mage " << this->_name << " unequips " \
		<< this->_inventory[idx]->getType() << " *" << std::endl;

	if (idx < 4)
	{
		this->_inventory[idx] = NULL;
		for (int i = idx; i < 3; i++)
			this->_inventory[i] = this->_inventory[i + 1];
		showInventory(this->_inventory);
	}
	else
		std::cout << "Mage " << this->_name << " hasn't got that many inventory slots" << std::endl;
}

void 	Mage::use(int idx, ICharacter& target)
{
	std::cout << " > " << this->_name << \
		": And now you shall witness the power of the ancient spirits of magic!"\
	   	<< std::endl;

	this->_inventory[idx]->use(target);
}


void	Warrior::equip(AMateria* m)
{
	std::cout << "* Warrior " << this->_name << " equips " << m->getType() \
		<< " *" << std::endl;

	for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break;
        }
    }

	showInventory(this->_inventory);
}

void 	Warrior::unequip(int idx)
{
	std::cout << "* Warrior " << this->_name << " unequips " \
		<< this->_inventory[idx]->getType() << " *" << std::endl;

	if (idx < 4)
	{
		this->_inventory[idx] = NULL;
		for (int i = idx; i < 3; i++)
			this->_inventory[i] = this->_inventory[i + 1];
		showInventory(this->_inventory);
	}
	else
		std::cout << "Warrior " << this->_name << " hasn't got that many inventory slots" << std::endl;

	showInventory(this->_inventory);
}

void 	Warrior::use(int idx, ICharacter& target)
{
	std::cout << " > " << this->_name << \
		": heheh magick unga unga floop flip flop"\
	   	<< std::endl;

	this->_inventory[idx]->use(target);
}

//------DESTRUCTORS------//

Mage::~Mage()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
		}
	}

	std::cout << "Mage " << this->_name << " has been deleted" << std::endl;
}

Warrior::~Warrior()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];

	std::cout << "Warrior " << this->_name << " has been deleted" << std::endl;
}
