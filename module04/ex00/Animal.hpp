/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:39:21 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 16:14:55 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>


class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(Animal const &copy);

		Animal	&operator=(Animal const &rhs);

		std::string	getType(void) const;

		virtual void	makeSound() const;

		virtual ~Animal();
};

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);

		Dog	&operator=(Dog const &rhs);

		void	makeSound() const;

		~Dog();
};

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &copy);

		Cat	&operator=(Cat const &rhs);

		void	makeSound() const;

		~Cat();
};

#endif
