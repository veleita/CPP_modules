/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:15:46 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 11:38:34 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	D14M0ND_TP("Frankenstein");

	D14M0ND_TP.guardGate();
	D14M0ND_TP.takeDamage(20);
	D14M0ND_TP.attack("enemy");
	D14M0ND_TP.beRepaired(20);
	D14M0ND_TP.highFivesGuys();
	D14M0ND_TP.takeDamage(50);
	D14M0ND_TP.whoAmI();

	return (0);
}
