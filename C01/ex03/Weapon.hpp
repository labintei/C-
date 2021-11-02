/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:37:23 by labintei          #+#    #+#             */
/*   Updated: 2021/10/31 19:15:45 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_HPP
#define		WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
	public :
		Weapon(std::string name);
		~Weapon(void);
		const std::string& getType();
		void	setType(std::string name);
	private :
			std::string		_name;
};

#endif
