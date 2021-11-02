/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:54:18 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 13:17:55 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon& arme)
{
	this->_arme = &arme;
}

HumanB::HumanB(std::string name)
{
	HumanB::_name = name;
	HumanB::_arme = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks ";
	std::cout << "with his " << this->_arme->getType() << std::endl;
}
