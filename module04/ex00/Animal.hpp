/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:39:21 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 14:59:01 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(Animal const &copy);

		Animal	&operator=(Animal const &rhs);

		std::string	&getType(void) const;

		~Animal();
};

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string &type);
		Dog(Dog const &copy);

		Dog	&operator=(Dog const &rhs);

		void	makeSound() const;
};

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string &type);
		Cat(Cat const &copy);

		Cat	&operator=(Cat const &rhs);

		void	makeSound() const;
};

#endif
