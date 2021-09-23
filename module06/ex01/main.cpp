/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:07:22 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 18:48:47 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data data;

	data.iData = 42;
    data.cData = 'z';
    data.bData = true;


	Data	*originalPtr = &data;
	uintptr_t	raw = serialize(originalPtr);
	Data	*deserializedPtr = deserialize(raw);

	std::cout << "originalPtr: " << originalPtr << std::endl;
	std::cout << "deserializedPtr: " << deserializedPtr << std::endl;
	return (0);
}
