/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:09:01 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 15:12:17 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	a("Lauranne");
	ScavTrap	b("Bintein");

	a.attack("La mauvaise fois");
	b.attack(" L es M e ch an tt ss ");
	b.beRepaired(45);
	b.guardGate();
	a.takeDamage(5);
	a.beRepaired(7);

	return 0;
}
