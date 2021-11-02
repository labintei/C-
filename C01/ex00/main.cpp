/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:10:38 by labintei          #+#    #+#             */
/*   Updated: 2021/10/30 20:18:45 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	// STACk
	Zombie	a("Castor");
	// HEAP
	Zombie*		b = new Zombie("Lauranne");
	Zombie*		c = newZombie("Last Zombie");

	a.announce();
	b->announce();
	c->announce();
	randomChump("Mounji");

	delete b;
	delete c;
	return 0;
}
