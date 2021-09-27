/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:25:45 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/27 13:52:20 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void swap( T & x, T & y )
{
	T aux = x;
	x = y;
	y = aux;
}

template < typename T >
T min( T const & x, T const & y )
{
	return ( x < y ? x : y );
}

template < typename T >
T max( T const & x, T const & y )
{
	return ( x > y ? x : y );
}

#endif
