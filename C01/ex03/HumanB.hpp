/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:47:41 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 13:17:19 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANB_HPP
#define		HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public:
		void	setWeapon(Weapon& arme);
		HumanB(std::string name);
		~HumanB(void);
		void	attack();
	private:
		std::string	_name;
		Weapon*		_arme;
};

#endif
