/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:45:04 by labintei          #+#    #+#             */
/*   Updated: 2021/10/13 11:12:32 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private :
		std::string name;
	public :
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
		void announce();
//		void ~delete_Z();
};

#endif
