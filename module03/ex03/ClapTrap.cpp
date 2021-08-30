/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:37:41 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 11:31:50 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitpoints(10),
					_energyPoints(10), _attackDamage(0)
{
	std::cout << "An anonymous ClapTrap has been created!" << std::endl;
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

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<\
	" causing " << this->_attackDamage << " points of damage!" << std::endl;

	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Oh no! " << this->_name << " has taken " <<\
	amount << " points of damage!" << std::endl;

	this->_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " is being repaired. " <<\
	"It recovers " << amount << " hitpoints." << std::endl;

	this->_hitpoints += amount;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " has been destroyed forever." <<\
	 std::endl;
}
