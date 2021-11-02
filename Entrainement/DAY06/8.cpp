/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:28:07 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 19:35:17 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// CAST OPERATORS
//
// PERMET DE DEFINIR DES OPERATEUR
//
class	Foo
{
	public:
		Foo(float const v) : _v(v)	{}
		float	getv(void)			{return this->_v;}
		operator	float()			{return this->_v;}
		operator	int()			{return static_cast<int>(this->_v);}
		
	private:
		float	_v;
};

int		main(void)
{
	Foo	a(420.024f);
	float	b = a;
	int		c = a;

	std::cout << a.getv() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}
