/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:42:09 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 13:12:10 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANA_HPP
#define		HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

// ALWAYS HAVE A WEAPON -> REFERENCE

class	HumanA
{
	public:
		HumanA(std::string name, Weapon& arme);
		~HumanA(void);
		void	attack();
	private:
		HumanA(void);
		std::string		_name;
		Weapon&			_arme;
};

#endif
