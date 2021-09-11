/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:59:02 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/11 19:23:36 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


//------CONSTRUCTORS------//

Mage::Mage(): _name("Gandalf")
{
}

Mage::Mage(std::string name): _name(name)
{
}

Mage::Mage(Mage const & copy)
{
	*this = copy;	
}


Warrior::Warrior(): _name("Aragorn")
{
}

Warrior::Warrior(std::string name): _name(name)
{
}

Warrior::Warrior(Warrior const & copy)
{
	*this = copy;	
}


//------OPERATOR OVERLOADS------//

Mage const	&Mage::operator=(Mage const &rhs)
{
    this->_name = rhs.getName();
    return (*this);
}

Warrior const	&Warrior::operator=(Warrior const &rhs)
{
    this->_name = rhs.getName();
    return (*this);
}


//------GETTERS------//

std::string const &Mage::getName() const
{
    return this->_name;
}

std::string const &Warrior::getName() const
{
    return this->_name;
}
