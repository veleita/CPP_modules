/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:52:11 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 17:30:38 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : _type(type)
{
}

Weapon::~Weapon()
{
}

void		Weapon::setType(std::string const &type)
{
	this->_type = type;
}

std::string	const &Weapon::getType(void) const
{
	return this->_type;
}
