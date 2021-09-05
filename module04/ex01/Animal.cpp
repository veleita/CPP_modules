/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:44:11 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 18:26:13 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/********************************/
/*			BASE CLASS			*/
/********************************/

//------CONSTRUCTORS------//

Animal::Animal()
{
	std::cout << "An animal has been created" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

Animal	&Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

//------GETTERS------//

std::string	Animal::getType() const
{
	return (this->_type);
}


//------CLASS METHODS------//

void	Animal::makeSound() const
{
}


//------DESTRUCTOR------//

Animal::~Animal()
{
	std::cout << "Mother Earth has lost anothes living soul. Sad." << std::endl;
}


/********************************/
/*		DERIVED CLASSES			*/
/********************************/

//------CONSTRUCTORS------//

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();

	std::cout << "This animal is a dog" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
	this->_brain = new Brain();

	for (int i = 0; i < 100; i++)
	{
		this->_brain[i] = copy._brain[i];
	}
}

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();

	std::cout << "This animal is a cat" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
	this->_brain = new Brain();

	for (int i = 0; i < 100; i++)
	{
		this->_brain[i] = copy._brain[i];
	}
}


//------OPERATOR OVERLOADS------//

Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();

	for (int i = 0; i < 100; i++)
	{
		this->_brain[i] = rhs._brain[i];
	}

	return (*this);
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->_type = rhs.getType();

	for (int i = 0; i < 100; i++)
	{
		this->_brain[i] = rhs._brain[i];
	}

	return (*this);
}


//------CLASS METHODS------//

void	Dog::makeSound() const
{
	std::cout << "Woof, woof!" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Prrr... meow" << std::endl;
}


//------DESTRUCTORS------//

Dog::~Dog()
{
	std::cout << "Doggo got too excited and died" << std::endl;

	delete this->_brain;
}

Cat::~Cat()
{
	std::cout << "Cat lost the last one of its 7 lives" << std::endl;

	delete this->_brain;
}
