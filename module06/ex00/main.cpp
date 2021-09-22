/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:07:22 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/22 18:19:12 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(char **argv, int argc)
{
	if (argc != 2)
	{
		std::cout << "Enter one argument" << std::endl;
		return (1);
	}
	else
	{
		std::string input = static_cast <const std::string> argv[1];
		return (0);
	}
}
