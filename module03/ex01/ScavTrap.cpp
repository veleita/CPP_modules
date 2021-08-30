/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:31:18 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 10:05:35 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "A new ScavTrap named " << name << " has been created!" \
	<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target <<\
	" causing " << this->_attackDamage << " points of damage!" << std::endl;

	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered Gate keeper mode." \
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed forever." <<\
	 std::endl;
}
