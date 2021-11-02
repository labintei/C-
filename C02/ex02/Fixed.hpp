/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:10:24 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 09:59:18 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
#define		FIXED_HPP

#include <iostream>
#include <cmath>

// PAGE 1 nombre Fixed
// deux concepts 
// Accurency == Exactitude	et	Precision
// PAR EXEMPLE UN NOMBRE ENITER EST PLUS EXACTE QU UN INT
// <int>2.2 correspond a 2 pile
// La precision correspond a un chiffre plus precis parce qu elle n oublie pas
// la partie fratiioinelle exemple 5/2 ne float 2.5 et 2 en int float + Precision
//
// PAGE 2 floating number representation
// La representation des flottants varie de machine en machine 
// mais IEEE_745 standard est prevalent
// un IEEE_754 float(4 bytes) ou double (8 bytes) a 3 composants
// I un sign bit telling signifiant si + ou -
// II un exposant donnant l ordre de magnitude
// III un mantissa specifiant les chiffre actuel du numbre
//
//
// voir comment utiliser roundf a l avenir


class	Fixed
{
	private	:
		int			_val;
		static const	int	_bits = 8;
	public :
		Fixed(void);
		Fixed(const Fixed& copie);
		Fixed(const int val); // 01 PARTIE FRACTIONELLE INITIALISE COMME DANS EX00
		Fixed(const float val); // 01 same que const int
		float	toFloat(void) const; // 01 convertit un nombre a point fixe en float
		int		toInt(void) const; // 01 convertit un nombre a point fixe en int
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs);
		Fixed & operator+(Fixed const & rhs);
		Fixed & operator-(Fixed const & rhs);
		Fixed & operator*(Fixed const & rhs);
		Fixed & operator/(Fixed const & rhs);
		// LA DIFFERENCE DANS LES PREINCREMENTATION ET LES POSTINCREMENTATION
		// SE TROUVE DANS COMMENT L OPERATEUR TRAITE LES DEUX OPERANDES
		//  prefixe & incremente egalement son OPERANDES
		// ++p
		Fixed operator++(int);
		//  p++
		Fixed & operator++(void);
		// --p
		Fixed operator--(int);
		// p--
		Fixed & operator--(void);
		bool operator<(Fixed const & rhs);
		bool operator>(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);
		int		getRawBits(void) const; // VALEUR BRUT DU NOMBRE A POINTS FIXE
		void	SetRawBits(int const raw); // set la valeur du nombre a point fixe

		Fixed& max(Fixed a, Fixed b);
		Fixed& min(Fixed a, Fixed b);
};


std::ostream & operator<<(std::ostream &a, Fixed const & f);


#endif
