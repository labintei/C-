/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:24:54 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 21:08:27 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::_bits = 8;

Fixed::Fixed(void): _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& copie)
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

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}
void	Fixed::SetRawBits(int const raw)
{
	this->_val = raw;
}

std::ostream& operator<<(std::ostream &a, Fixed const & f)
{
	a << f.getRawBits();
	return a;
}
