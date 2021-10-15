/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acessor.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:24:33 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 17:41:32 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/accessors.hpp"

Sample::Sample() : _foo(46)
{
	std::cout << "Constr" << std::endl;
}

Sample::~Sample()
{
	std::cout << "Destr" << std::endl;
}

int Sample::getfoo( void ) const
{
	return this->_foo;
}

void Sample::setfoo(int v)
{
	if(v >= 0)
		this->_foo = v;
	return ;
}


int		main()
{
	Sample		a;

	a.setfoo(42);
	std::cout << a.getfoo() << std::endl;
	return 0;
}
