/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:09:01 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 12:14:51 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Lauranne");

	a.attack("La mauvaise fois");
	a.takeDamage(5);
	a.beRepaired(7);

	return 0;
}
