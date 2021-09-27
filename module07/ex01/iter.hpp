/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:25:45 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/27 15:33:35 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T, typename U >
void iter(T *array, int len, U func(T const &))
{
    for(int i = 0; i < len; i++)
	{
        func(array[i]);
    }
}

#endif
