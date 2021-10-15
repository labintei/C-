/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparaisons.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:43:25 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 19:00:27 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/comparaisons.hpp"

// On peut comparer deux elements differents
// Egalement on peut regarder si leur adresse sont ==

Sample::Sample(int v): _foo(v)
{
	std::cout << "Creat" << std::endl;
}

Sample::~Sample()
{
	std::cout << "Destructor" << std::endl;
}

int		Sample::getfoo() const
{
	return _foo;
//	std::cout << "Chiffre " <<  this->_foo << std::endl;
}

int		Sample::compare(Sample *other) const
{
	if(this->_foo > other->getfoo())
		return(1);
	if(this->_foo < other->getfoo())
		return(-1);
	return(0);
}


int		main()
{
	Sample	a(42);
	Sample	b(42);

	if (&a == &a)
		std::cout << "Equal" << std::endl;
	else
		std::cout << "Not Equal" << std::endl;
	if (&a == &b)
		std::cout << "Equal" << std::endl;
	else
		std::cout << "Not Equal" << std::endl;
	std::cout << "Chiffre a > b ? " << a.compare(&b) << std::endl;
	return 0;
}
