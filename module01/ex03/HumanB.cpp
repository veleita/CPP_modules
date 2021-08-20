/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:52:22 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 17:23:46 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(const Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() \
		<< std::endl;
}
