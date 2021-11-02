/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:24:54 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 22:46:35 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
