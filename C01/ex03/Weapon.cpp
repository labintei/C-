/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:15:18 by labintei          #+#    #+#             */
/*   Updated: 2021/10/31 19:20:08 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name): _name(name)
{
}


Weapon::~Weapon(void)
{
}

const std::string&	Weapon::getType(void)
{
	return Weapon::_name;;
}

void	Weapon::setType(std::string name)
{
	this->_name = name;
}
