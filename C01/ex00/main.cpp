/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:10:38 by labintei          #+#    #+#             */
/*   Updated: 2021/10/13 11:11:30 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie	a;
	Zombie	b;

	a.newZombie("Lauranne");
	a.announce();
	b.randomChump("Bintein");

	return 0;
}
