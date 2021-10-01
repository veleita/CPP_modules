/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:14:24 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/01 13:41:38 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
	private:

	public:

		MutantStack();	
		MutantStack(MutantStack	const &copy);

		MutantStack	&operator=(MutantStack const &rhs);

		~MutantStack();	
};

#endif
