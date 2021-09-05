/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:37:41 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 14:23:41 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//------CONSTRUCTORS------//

ClapTrap::ClapTrap() : _name("Clappy"), _hitpoints(10),
					_energyPoints(10), _attackDamage(0)
{
	std::cout << "A new ClapTrap named Clappy has been created!" \
	<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10),
					_energyPoints(10), _attackDamage(0)
{
	std::cout << "A new ClapTrap named " << name << " has been created!" \
	<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHP();
	this->_energyPoints = rhs.getEP();
	this->_attackDamage = rhs.getAD();
	return (*this);
}


//------GETTERS------//

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int			ClapTrap::getHP() const
{
	return (this->_hitpoints);
}

int			ClapTrap::getEP() const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAD() const
{
	return (this->_attackDamage);
}


//------CLASS METHODS------//

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<\
	" causing " << this->_attackDamage << " points of damage!" << std::endl;

	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Oh no! ClapTrap " << this->_name << " has taken " <<\
	amount << " points of damage!" << std::endl;

	this->_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is being repaired. " <<\
	"It recovers " << amount << " hitpoints." << std::endl;

	this->_hitpoints += amount;
}


//------DESTRUCTOR------//

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed forever." <<\
	 std::endl;
}
