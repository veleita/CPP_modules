/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:43:13 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/27 18:48:08 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template< typename T = int >
class Array
{
	private:
		T	*_array;
		int	_len;

	public:

		Array<T>() : _array(new T[0]), _len(0) {}

		Array<T>(unsigned int n) : _array(new T[n]), _len(n) {}

		Array<T>(Array<T> &copy)
		{
			this->_len = copy.size();

			this->_array = new T[this->_len];
			for (int i = 0; i < this->_len; i++)
			{
				(*this)[i] = copy[i];
			}
		}


		Array<T>	&operator=(Array<T> &rhs)
		{
			delete this->_array;

			this->_len = rhs.size();

			this->_array = new T[this->_len];
			for (int i = 0; i < this->_len; i++)
			{
				(*this)[i] = rhs[i];
			}

			return (*this);
		}

		T	&operator[](int const index)
		{
			if (index < 0 || index >= this->_len)
				throw OutOfLimitsException();

			return (this->_array[index]);
		}


		int	size() const
		{
			return (this->_len);
		}


		class	OutOfLimitsException : public std::exception
		{
			public:
				virtual const char *what() const throw() {	return("ERROR: Out of limits");	};
		};

		~Array()
		{
			delete [] this->_array;
		}
};

#endif
