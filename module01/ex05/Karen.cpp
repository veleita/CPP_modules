/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:29:28 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/22 16:01:46 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug()
{
	std::cout << \
		"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" \
		<< std::endl;
}

void	Karen::info()
{
	std::cout << \
		"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" \
		<< std::endl;
}

void	Karen::warning()
{
	std::cout << \
		"I think I deserve to have some extra bacon for free."\
	   	<< " I’ve been coming here for years and you just started working here last month." \
		<< std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	void (*levels [4])() = {debug(), info(), warning(), error()};
	std::string labels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (labels[i] == level)
			(*levels[i])();
	}
}
