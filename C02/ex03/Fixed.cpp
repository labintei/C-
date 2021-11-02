/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:24:54 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 11:03:05 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const float f)
{
	this->_val = roundf( f * (1 << this->_bits));
	return ;
}

Fixed::Fixed(const int val)
{
	this->_val = val << Fixed::_bits;
}

Fixed::Fixed(void): _val(0)
{
}

Fixed::Fixed(const Fixed& copie)
{
	*this = copie;
}

Fixed::~Fixed(void)
{
}

Fixed	& Fixed::operator=(Fixed const & rhs)
{
	this->_val = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	return Fixed(toFloat() / rhs.toFloat());
}

Fixed	& Fixed::operator++(void)
{
	_val++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	_val++;
	return temp;
}

Fixed	& Fixed::operator--(void)
{
	_val--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	_val--;
	return temp;
}

bool		Fixed::operator<(Fixed const &rhs)
{
	if(this->_val < rhs.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator>(Fixed const & rhs)
{
	if(this->_val > rhs.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator<=(Fixed const & rhs)
{
	if(this->_val <= rhs.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator>=(Fixed const & rhs)
{
	if(this->_val >= rhs.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator==(Fixed const & rhs)
{
	if(this->_val == rhs.getRawBits())
		return true;
	else
		return false;
}

bool		Fixed::operator!=(Fixed const & rhs)
{
	if(this->_val != rhs.getRawBits())
		return true;
	else
		return false;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

Fixed const & min(Fixed const & a, Fixed const & b)
{
	if(a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}



// DEUX FONCTIONS D ECRITE POUR OVERLOAD

Fixed & max(Fixed & a, Fixed & b)
{
	if(a > b)
		return a;
	else
		return b;
}

Fixed & min(Fixed & a, Fixed & b)
{
	if(a < b)
		return a;
	else
		return b;
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
