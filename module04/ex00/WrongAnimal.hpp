/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:39:21 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 16:42:31 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>


class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);

		WrongAnimal	&operator=(WrongAnimal const &rhs);

		std::string	getType(void) const;

		void	makeSound() const;

		virtual ~WrongAnimal();
};

class WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(WrongDog const &copy);

		WrongDog	&operator=(WrongDog const &rhs);

		void	makeSound() const;

		~WrongDog();
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &copy);

		WrongCat	&operator=(WrongCat const &rhs);

		void	makeSound() const;

		~WrongCat();
};

#endif
