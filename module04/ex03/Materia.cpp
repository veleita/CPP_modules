/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:39:14 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/11 19:32:21 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"


//------CONSTRUCTORS------//

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(AMateria const &copy) : _type(copy._type)
{
}


Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
}


Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
}


//------OPERATOR OVERLOADS------//

AMateria const &AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;
	return (*this);
}

Ice const &Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return (*this);
}

Cure const &Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return (*this);
}



//------GETTERS------//

std::string const &AMateria::getType() const
{
	return (this->_type);
}

//------CLASS METHODS------//

void	AMateria::use(ICharacter &target) const
{
	std::cout << "* throws some kind of magic at " <<  target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return (clone);
}

void	Ice::use(ICharacter &target) const
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter &target) const
{
	std::cout << "* heals " <<  target.getName() << "’s wounds *" << std::endl;
}


//------DESTRUCTORS------//

AMateria::~AMateria()
{
}

Ice::~Ice()
{
}

Cure::~Cure()
{
}
