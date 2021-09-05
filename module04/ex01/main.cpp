/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:52:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 18:25:07 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	const Animal* doggo = new Dog();
	const Animal* puss = new Cat();

	const Animal *array[2];

	array[0] = doggo;
	array[1] = puss;

	for (int i = 0; i < 2; i++)
		delete array[i];

	return 0;
}
