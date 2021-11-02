/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:04:00 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 13:13:19 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arme): _name(name), _arme(arme)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks ";
	std::cout << "with his " << this->_arme.getType() << std::endl;
}
