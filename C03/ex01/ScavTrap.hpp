/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:20:47 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 14:56:50 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
#define		SCAVTRAP_HPP

#include "ClapTrap.hpp"

// DOIT COMMENCER PAR BUILD UN FLAGTRAP AVANT DE BUILD UN SCAVTRAP

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string const & name);
		~ScavTrap(void);
		void	guardGate();
	private:
		bool	_guard;
};

#endif
