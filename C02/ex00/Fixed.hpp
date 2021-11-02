/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:10:24 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 21:07:24 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
#define		FIXED_HPP

#include <iostream>

class	Fixed
{
	private	:
		int			_val;
		static int	_bits;
	public :
		Fixed(void);
		Fixed(Fixed& copie);
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs);
		int		getRawBits(void) const; // VALEUR BRUT DU NOMBRE A POINTS FIXE
		void	SetRawBits(int const raw); // set la valeur du nombre a point fixe
};

std::ostream & operator<<(std::ostream &a, Fixed const & f);

#endif
