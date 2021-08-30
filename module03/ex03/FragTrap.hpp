/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:33:43 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/30 11:30:08 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap 
{

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &copy);

		void	attack(std::string const &target);
		void	highFivesGuys(void);

		~FragTrap();
};

#endif
