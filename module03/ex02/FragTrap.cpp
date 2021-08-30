/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:35:39 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 10:49:10 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is too good for this world."\
	<< std::endl;
}
