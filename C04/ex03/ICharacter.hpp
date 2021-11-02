/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:34:40 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 21:39:37 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICHARACTER_HPP
#define		ICHARACTER_HPP

#include "AMateria.hpp"

class	ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual	std::string const & getName() const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
};

#endif
