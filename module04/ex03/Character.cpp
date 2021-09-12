/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:59:02 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/12 20:15:01 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


//------CONSTRUCTORS------//

Mage::Mage(): _name("Rasmodius")
{
}

Mage::Mage(std::string name): _name(name)
{
}

Mage::Mage(Mage const & copy)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = copy._inventory[i];
	}

	*this = copy;	
}


Warrior::Warrior(): _name("Rufus")
{
}

Warrior::Warrior(std::string name): _name(name)
{
}

Warrior::Warrior(Warrior const & copy)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = copy._inventory[i];
	}

	*this = copy;	
}


//------OPERATOR OVERLOADS------//

Mage const	&Mage::operator=(Mage const &rhs)
{
    this->_name = rhs.getName();
	
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = rhs._inventory[i];
	}

    return (*this);
}

Warrior const	&Warrior::operator=(Warrior const &rhs)
{
    this->_name = rhs.getName();
	
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = rhs._inventory[i];
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

	for (int i = 0; i < 4; ++i)
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
		this->_inventory[idx] = NULL;
	else
	{
		for (int i = 1; i < 4; ++i)
	    {
			if (this->_inventory[i - 1] == NULL && this->_inventory[i] != NULL)
			{
				this->_inventory[i - 1] = this->_inventory[i];
				this->_inventory[i] = NULL;
			}
		}
	}

	showInventory(this->_inventory);
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

	for (int i = 0; i < 4; ++i)
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
		return ;
	}

	for (int i = 1; i < 4; ++i)
    {
		if (this->_inventory[i - 1] == NULL && this->_inventory[i] != NULL)
		{
			this->_inventory[i - 1] = this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}

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
}

Warrior::~Warrior()
{
}
