/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:35:25 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/28 16:05:40 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template < typename T >
typename T::iterator easyfind(T	&container, int const find)
{
	return ( std::find(container.begin(), container.end(), find) );
}

#endif
