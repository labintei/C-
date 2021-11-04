/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:53:45 by labintei          #+#    #+#             */
/*   Updated: 2021/11/04 12:28:32 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"



AMateria::AMateria(std::string const & type): type(type)
{

}

std::string	const &		AMateria::getType()const
{
	return type;
}

AMateria*		AMateria::clone() const
{
	return *this;
}
