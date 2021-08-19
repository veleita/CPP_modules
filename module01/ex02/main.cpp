/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:34:57 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/19 20:45:08 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string		str = "HI THIS IS BRAIN";

	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Original string: "<< str << std::endl;
	std::cout << "Pointer to string: "<< *stringPTR << std::endl;
	std::cout << "Reference of string: "<< stringREF << std::endl;

	return (0);
}
