/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:18:22 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 15:24:56 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FRAGTRAP_HPP
#define		FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap	: public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		void	highFiveGuys(void);
};

#endif
