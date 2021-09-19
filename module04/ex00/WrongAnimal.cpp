/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:44:11 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/19 18:10:43 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/********************************/
/*			BASE CLASS			*/
/********************************/

//------CONSTRUCTORS------//

WrongAnimal::WrongAnimal()
{
	std::cout << "An animal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

//------GETTERS------//

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}


//------CLASS METHODS------//

void	WrongAnimal::makeSound() const
{
}


//------DESTRUCTOR------//

WrongAnimal::~WrongAnimal()
{
	std::cout << "Mother Earth has lost another living soul. Sad." << std::endl;
}


/********************************/
/*		DERIVED CLASSES			*/
/********************************/

//------CONSTRUCTORS------//

WrongDog::WrongDog()
{
	this->_type = "WrongDog";

	std::cout << "This animal is a dog" << std::endl;
}

WrongDog::WrongDog(WrongDog const &copy)
{
	*this = copy;
}

WrongCat::WrongCat()
{
	this->_type = "WrongCat";

	std::cout << "This animal is a cat" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	*this = copy;
}


//------OPERATOR OVERLOADS------//

WrongDog	&WrongDog::operator=(WrongDog const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}


//------CLASS METHODS------//

void	WrongDog::makeSound() const
{
	std::cout << "Woof, woof!" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Prrr... meow" << std::endl;
}


//------DESTRUCTORS------//

WrongDog::~WrongDog()
{
	std::cout << "WrongDoggo got too excited and died" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat lost the last one of its 7 lives" << std::endl;
}
