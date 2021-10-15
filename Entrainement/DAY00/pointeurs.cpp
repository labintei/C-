/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeurs.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:40:51 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 21:15:48 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/pointeurs.hpp"

Sample::Sample()
{
	this->foo = 0;
}

Sample::~Sample()
{
	std::cout << "Destruct" << std::endl;
}

void	Sample::bar() const
{
	std::cout << "iiiiiiii" << std::endl;
}

int		main()
{
	Sample		i;
	Sample *	i1 = &i;
	int			Sample::*p = NULL;
	void		(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of number foo " << i.foo << std::endl;
	i.*p = 21;
	std::cout << "Value of Number foo " << i.foo << std::endl;
	i1->*p = 42;
	std::cout << "Value of Number foo " << i.foo << std::endl;

	f = &Sample::bar;

	(i.*f)();
	(i1->*f)();

	return 0;
}
