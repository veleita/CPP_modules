/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:44:14 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/22 16:08:35 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen exampleKaren;

	std::cout << "[DEBUG] Karen: ";
	exampleKaren.complain("DEBUG");
	
	std::cout << "[INFO] Karen: ";
	exampleKaren.complain("INFO");
	
	std::cout << "[WARNING] Karen: ";
	exampleKaren.complain("WARNING");
	
	std::cout << "[ERROR]: Karen: ";
	exampleKaren.complain("ERROR");
	
	return 0;
}
