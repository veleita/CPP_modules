/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:15:46 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 09:54:00 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	SK4V_TP("Serena");

	SK4V_TP.attack("filthy poser");
	SK4V_TP.takeDamage(50);
	SK4V_TP.beRepaired(30);
	SK4V_TP.guardGate();

	return (0);
}
