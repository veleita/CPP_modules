/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 14:45:32 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 11:29:43 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &copy);

		void	attack(std::string const &target);
		void	guardGate();

		~ScavTrap();
};

#endif
