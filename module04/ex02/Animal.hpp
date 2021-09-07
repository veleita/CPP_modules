/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:39:21 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/07 20:14:41 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(Animal const &copy);

		Animal	&operator=(Animal const &rhs);

		std::string	getType(void) const;

		virtual void	makeSound() const = 0;

		virtual ~Animal();
};

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(Dog const &copy);

		Dog	&operator=(Dog const &rhs);

		Brain	*getBrain(void) const;

		void	makeSound() const;

		~Dog();
};

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(Cat const &copy);

		Cat	&operator=(Cat const &rhs);

		Brain	*getBrain(void) const;

		void	makeSound() const;

		~Cat();
};

#endif
