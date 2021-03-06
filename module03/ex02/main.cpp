/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:15:46 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 10:48:05 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	FR4G_TP("Cronk");

	FR4G_TP.takeDamage(20);
	FR4G_TP.attack("huge horrible monster");
	FR4G_TP.beRepaired(20);
	FR4G_TP.highFivesGuys();
	FR4G_TP.takeDamage(50);

	return (0);
}
