/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:19:11 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 17:29:05 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		DIAMONDTRAP_HPP
#define		DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// Name(Parameter of constructor)
// Claptrap::name (Parameter of constructor + "_clap_name")
// Hitpoints(Fragtrap)
// Energy points(ScavTrap)
// Attack Damage(Fragtrap)
// attack(Scavtrap)
//
class	DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		void	whoAmI();
	private:
		std::string	_name;
};

#endif
