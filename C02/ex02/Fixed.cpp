/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:24:54 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 10:01:28 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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



Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(f * (1 << this->_bits));
	return ;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = val << Fixed::_bits;
}

Fixed::Fixed(void): _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copie)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copie;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return *this;
}

Fixed	& Fixed::operator*(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return *this;
}

Fixed	& Fixed::operator+(Fixed const & rhs)
{
	this->_val += rhs.getRawBits();
	return *this;
}

Fixed	& Fixed::operator-(Fixed const & rhs)
{
	this->_val -= rhs.getRawBits();
	return *this;
}

Fixed	& Fixed::operator/(Fixed const & rhs)
{
	this->_val /= rhs.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const
{
	return	(((float)(this->_val) / (1 << _bits)));
}

int		Fixed::toInt(void) const
{
	return this->_val >> Fixed::_bits;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}
void	Fixed::SetRawBits(int const raw)
{
	_val = raw;
}

std::ostream& operator<<(std::ostream &a, Fixed const & f)
{
	a << f.toFloat();
	return a;
}
