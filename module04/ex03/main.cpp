/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:52:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/10 12:58:23 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

int main()
{
	Cure	*cure = new Cure();
	Ice	*ice = new Ice();

	ICharacter	*warrior = new Warrior();

	cure->use(*warrior);
	ice->use(*warrior);

	delete cure;
	delete ice;
	delete warrior;
	return (0);
}
