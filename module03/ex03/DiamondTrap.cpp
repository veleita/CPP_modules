/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:11:35 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 15:34:29 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


//------CONSTRUCTORS------//

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << \
	"Oh my god! ScavTrap and FragTrap are merging into a DiamondTrap!" \
	<< std::endl;

	this->_name = "Frankie";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	std::cout << \
	"Oh my god! ScavTrap and FragTrap are merging into a DiamondTrap!" \
	<< std::endl;

	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHP();
	this->_energyPoints = rhs.getEP();
	this->_attackDamage = rhs.getAD();
	return (*this);
}


//------CLASS METHODS------//

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->_name << " " << ClapTrap::_name << std::endl;
}


//------DESTRUCTOR------//

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap unmerges." << std::endl;
}
