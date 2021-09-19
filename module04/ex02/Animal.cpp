/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:44:11 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/19 18:16:31 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/********************************/
/*			BASE CLASS			*/
/********************************/

//------CONSTRUCTORS------//

AAnimal::AAnimal()
{
	std::cout << "An animal has been created" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "Copy constructor" << std::endl;
	*this = copy;
}


//------OPERATOR OVERLOADS------//

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

//------GETTERS------//

std::string	AAnimal::getType() const
{
	return (this->_type);
}


//------DESTRUCTOR------//

AAnimal::~AAnimal()
{
	std::cout << "Mother Earth has lost another living soul. Sad." << std::endl;
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
	this->_brain = new Brain();

	for (int i = 0; i < 100; i++)
	{
		this->_brain[i] = copy._brain[i];
	}
	
	*this = copy;
}

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();

	std::cout << "This animal is a cat" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Copy constructor" << std::endl;
	
	this->_brain = new Brain();

	for (int i = 0; i < 100; i++)
	{
		this->_brain[i] = copy._brain[i];
	}
	
	*this = copy;
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


//------GETTERS------//

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
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
