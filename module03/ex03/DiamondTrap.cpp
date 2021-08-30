/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:11:35 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 11:37:07 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->_name << " " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap unmerges." << std::endl;
}
