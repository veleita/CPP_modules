/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:16:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 10:13:46 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:				// No longer private so derived
		std::string	_name;		// classes have access
		int		_hitpoints;
		int		_energyPoints;
		int		_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &copy);

		virtual void	attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		
		virtual		~ClapTrap();
};

#endif
