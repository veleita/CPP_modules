/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:02:44 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/28 16:57:23 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include "easyfind.hpp"

int main()
{
	std::vector<int>	vctContainer;

	for (int i = 1; i <= 10; i += 2)
        vctContainer.push_back(i);
	 if (easyfind(vctContainer, 3) != vctContainer.end())
		 std::cout << "found!" << std::endl;
	 else
		 std::cout << "not found :(" << std::endl;

	std::list<int>		lstContainer;
	for (int j = 0; j <= 10; j += 2)
        lstContainer.push_back(j);
	 if (easyfind(lstContainer, 2) != lstContainer.end())
		 std::cout << "found!" << std::endl;
	 else
		 std::cout << "not found :(" << std::endl;
	 
	return (0);
}
