/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:20:47 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 17:33:25 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
#define		SCAVTRAP_HPP

#include "ClapTrap.hpp"

// DOIT COMMENCER PAR BUILD UN FLAGTRAP AVANT DE BUILD UN SCAVTRAP

class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(std::string const & name);
		ScavTrap(void);
		~ScavTrap(void);
		void	guardGate();
	private:
		bool	_guard;
};

#endif
