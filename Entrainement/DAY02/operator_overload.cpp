/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overload.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:15:19 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 21:25:18 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// NOTATION INFIXE 1 + 1
// NOTATION POSTFIXE 1 1 +
// NOTATION PREFIXE OU FONCTIONELLE  + 1 1  -> +(1 1)

class	Integer
{
	public:
		Integer(int const n);
		~Integer(void);
		int		getValue(void) const;
		Integer & operator=(Integer const & rhs);
		Integer	operator+(Integer const & rhs) const;
	private:
		int		_n;
};

std::ostream & operator<<( std::ostream & a, Integer const & rhs);

Integer::Integer(int const n): _n(n)
{
	std::cout << "Create" << std::endl;
}

Integer::~Integer(void)
{
	std::cout << "Destroy" << std::endl;
}

int		Integer::getValue(void) const
{
	return	this->_n;
}

Integer		Integer::operator+(Integer const & rhs) const
{
	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return Integer( this->_n + rhs.getValue());
}

Integer	&	Integer::operator=(Integer const & rhs)
{
	std::cout << "Assignation  operator called with " << this->_n;
	std::cout << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

std::ostream	& operator<<(std::ostream & a, Integer const & rhs)
{
	a << rhs.getValue();
	return a;
}
int		main()
{
	Integer	x(30);
	Integer y(10);
	Integer z(0);

	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	std::cout << "Value of z : " << z << std::endl;

	y = Integer(12);
	std::cout << "Value of y : " << y << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;

	return 0;
}

