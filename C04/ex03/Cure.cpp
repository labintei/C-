/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:38:56 by labintei          #+#    #+#             */
/*   Updated: 2021/11/04 12:35:40 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
}

Cure::~Cure(void)
{
}

CUre	Cure::use(ICharacter *target)
{
	std::cout << "* heals " << target.getName() << " wounds*"  << std::endl;
}
