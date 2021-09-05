/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:33:43 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 14:36:41 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &copy);

		FragTrap &operator=(FragTrap const &rhs);

		void	attack(std::string const &target);
		void	highFivesGuys(void);

		~FragTrap();
};

#endif
