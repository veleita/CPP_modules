/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:31:18 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 15:33:27 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


//------CONSTRUCTORS------//

ScavTrap::ScavTrap() : ClapTrap("Scavvy")
{
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << " This is not just a crappy ScavTrap! It's a ScavTrap!" \
	<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << " This is not just a crappy ScavTrap! It's a ScavTrap!" \
	<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHP();
	this->_energyPoints = rhs.getEP();
	this->_attackDamage = rhs.getAD();
	return (*this);
}


//------CLASS METHODS------//

void	ScavTrap::attack(std::string const &target)
{
	std::cout << this->_name << " enters fulmination mode! " << target <<\
	" gets smashed! UH! " << this->_attackDamage << " points of damage!" <<\
	std::endl;

	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered Gate keeper mode." \
	<< std::endl;
}


//------DESTRUCTOR------//

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " dies dramatically." <<\
	 std::endl;
}
