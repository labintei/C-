/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:09:01 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 16:10:17 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	a("Lauranne");
	ScavTrap	b("Bintein");
	FragTrap	c("Cool guy");

	a.attack("La mauvaise fois");
	b.attack(" L es M e ch an tt ss ");
	c.attack(" LES PLOUS BO");
	c.beRepaired(12);
	b.beRepaired(45);
	b.guardGate();
	a.takeDamage(5);
	a.beRepaired(7);
	c.highFiveGuys();

	return 0;
}
