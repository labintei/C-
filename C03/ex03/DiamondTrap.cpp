/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:18:28 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 18:11:15 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap::ClapTrap((name + "_clap_name")), FragTrap::FragTrap(),  ScavTrap::ScavTrap()
{
	this->_name = name;
	_hitpoint = FragTrap::_hitpoint;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << "Created DiamondTrap " << name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called for DiamondTrap " << this->_name << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name of DiamondTrap " << _name;
	std::cout << "Name of Claptrap " << ClapTrap::_name;
}
