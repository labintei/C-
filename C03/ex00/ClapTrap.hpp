/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:08:47 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 11:46:54 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CLAPTRAP_HPP
#define		CLAPTRAP_HPP

#include <iostream>

class		ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	private:
		std::string		_name;
		int				_hitpoint;
		int				_energy;
		int				_attack;
};

#endif
