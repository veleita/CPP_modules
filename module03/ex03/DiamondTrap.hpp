/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:54:55 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 11:28:52 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &copy);

		void	attack(std::string const &target);
		void	whoAmI(void);

		~DiamondTrap();
};

#endif
