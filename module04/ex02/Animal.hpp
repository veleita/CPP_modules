/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:39:21 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/19 18:16:13 by mzomeno-         ###   ########.fr       */
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
		AAnimal();
		AAnimal(AAnimal const &copy);

		AAnimal	&operator=(AAnimal const &rhs);

		std::string	getType(void) const;

		virtual void	makeSound() const = 0;

		virtual ~AAnimal();
};

class Dog : public AAnimal
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

class Cat : public AAnimal
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
