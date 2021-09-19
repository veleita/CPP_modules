/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:23:08 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/19 18:05:16 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


//------CONSTRUCTORS------//

Grimoire::Grimoire()
{
	for (int i = 0; i < 4; i++)
	{
		this->_materia[i] = NULL;
	}

	std::cout << "A new grimoire was created" << std::endl;
}

Grimoire::Grimoire(Grimoire const &copy)
{
	*this = copy;

	std::cout << "A new grimoire was created" << std::endl;
}


//------OPERATOR OVERLOADS------//

Grimoire const &Grimoire::operator=(Grimoire const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		this->_materia[i] = rhs._materia[i];
	}

	return (*this);
}


//------CLASS METHODS------//

void	Grimoire::learnMateria(AMateria *newMateria)
{
	std::cout << "Materia " << newMateria->getType() << \
		" has been registered in grimoire" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = newMateria;
			return ;
		}
	}
}

AMateria	*Grimoire::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
		if (this->_materia[i] == NULL)
			break ;
	}

	return (NULL);
}


//------DESTRUCTORS------//

Grimoire::~Grimoire()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
		{
			delete _materia[i];
		}
	}

	std::cout << "Grimoire has been deleted" << std::endl;
}
