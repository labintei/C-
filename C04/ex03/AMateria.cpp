/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:53:45 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 21:31:38 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type): type(type)
{

}

AMateria::AMateria(void): type("empty")
{

}


AMateria::~AMateria(void)
{

}



std::string	const &		AMateria::getType()const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " uses nothing" << std::endl;
}

//		virtual AMateria* clone() const = 0;

/*
AMateria*		AMateria::clone() const
{
	return ;
}*/
