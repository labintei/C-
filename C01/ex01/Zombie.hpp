/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:45:04 by labintei          #+#    #+#             */
/*   Updated: 2021/10/30 20:36:43 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private :
		std::string _name;
	public :
		Zombie(void);
		~Zombie(void);
		void set_name(std::string _name);
		void announce();
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);
void randomChump(std::string name);

#endif
