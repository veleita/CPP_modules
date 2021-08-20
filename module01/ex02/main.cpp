/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:34:57 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 12:40:35 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string		str = "HI THIS IS BRAIN";

	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "String mem address (original): "<< &str << std::endl;
	std::cout << "String mem address (pointer): "<< stringPTR << std::endl;
	std::cout << "String mem address (reference): "<< &stringREF << std::endl << std::endl;
	
	std::cout << "String (original): "<< str << std::endl;
	std::cout << "String (pointer): "<< *stringPTR << std::endl;
	std::cout << "String (reference): "<< stringREF << std::endl;

	return (0);
}
