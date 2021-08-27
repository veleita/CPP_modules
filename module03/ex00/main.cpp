/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:15:46 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/27 17:30:10 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	CL4P_TP("Brian");

	CL4P_TP.attack("pinhata");
	CL4P_TP.takeDamage(30);
	CL4P_TP.beRepaired(10);

	return (0);
}
