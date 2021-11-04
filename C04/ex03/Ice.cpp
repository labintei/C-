/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:41:46 by labintei          #+#    #+#             */
/*   Updated: 2021/11/04 12:42:14 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice	Ice::use(ICharacter *target)
{
	std::cout << "Shoots an eye bolt at " << target.getName()  << std::endl;
}
