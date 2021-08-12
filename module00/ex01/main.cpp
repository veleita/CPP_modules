/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:50:17 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/12 18:03:20 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	string	input;
	bool	exit = false;

	while (exit == false)
	{
		cout << "What would you like to do?" << endl;
		getline(cin, input);

		if (input == "ADD")
			cout << "Adding contact" << endl;
		else if (input == "SEARCH")
			cout << "Searching contact" << endl;
		else if (input == "EXIT")
			exit = true;
	}
}
