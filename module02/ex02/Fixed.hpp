/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zome </var/spool/mail/zome>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:41:40 by zome              #+#    #+#             */
/*   Updated: 2021/08/24 20:42:07 by zome             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>	// for roundf()

class Fixed
{
	private:
		int _value;
		static const int _bits = 8;

	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &copy);
		~Fixed();

		Fixed 	&operator=(Fixed const &rhs);

		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		Fixed 	operator+(Fixed const &rhs);
		Fixed 	operator-(Fixed const &rhs);
		Fixed 	operator*(Fixed const &rhs);
		Fixed 	operator/(Fixed const &rhs);

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int	toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &value);

#endif
