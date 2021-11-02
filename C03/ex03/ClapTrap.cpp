/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:08:24 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 17:43:11 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("(null)"), _hitpoint(10), _energy(10), _attack(0)
{
	std::cout << "Created ClapTrap " << "(null)" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoint(10), _energy(10), _attack(0)
{
	std::cout << "Created ClapTrap " << name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called for ClapTrap " << this->_name << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "Claptrap " << this->_name << " attack ";
	std::cout << target << " causing " << this->_hitpoint << " points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " take " << amount << " damages and now have ";
	this->_energy -= amount;
	std::cout << this->_energy << " energy" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_energy += amount;
	std::cout << this->_name << " is repaired and gain " << amount << " energy";
	std::cout << std::endl;
	std::cout << this->_name << " have now " << this->_energy << " energy" << std::endl;
}

void	ClapTrap::Setname(std::string s)
{
	_name = s;
}
