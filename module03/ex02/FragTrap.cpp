/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:35:39 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 14:37:48 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


//------CONSTRUCTORS------//

FragTrap::FragTrap() : ClapTrap("Fraggy")
{
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << " Guys, it's FragTrap! ...man, this guy is a himbo." \
	<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << " Guys, it's FragTrap! ...man, this guy is a himbo." \
	<< std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHP();
	this->_energyPoints = rhs.getEP();
	this->_attackDamage = rhs.getAD();
	return (*this);
}


//------CLASS METHODS------//

void	FragTrap::attack(std::string const &target)
{
	std::cout << this->_name << " frowns and pushes " << target << " softly."\
	<< " DEMOLISHING " << this->_attackDamage << " points of damage!" <<\
	std::endl;

	this->_energyPoints--;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "> " << this->_name << \
	": Allright guys! Give me those high fives!!" << std::endl;
}


//------DESTRUCTOR------//

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is too good for this world."\
	<< std::endl;
}
