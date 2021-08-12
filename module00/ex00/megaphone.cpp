/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:24:00 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/12 15:00:28 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
using namespace std;

#define DEFAULT_MSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int argc, char **argv)
{
	if (argc == 1)
		cout << DEFAULT_MSG << endl;
	else
	{
		int		i = 1;
		int		j;
		char	*phrase;
		char	letter;

		while (i < argc)
		{
			phrase = argv[i];

			j = 0;
			while (phrase[j] != '\0')
			{
				letter = phrase[j];
				cout << (char) toupper(letter);
				j++;
			}
			i++;
		}
		cout << endl;
	}
	return (0);
}
