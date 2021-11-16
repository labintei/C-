/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:34:40 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 19:31:47 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICHARACTER_HPP
#define		ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

// ICharacter a donc un inventaire de 4 item de item[0] jusqu a item[3] (4)
// Si on equip un non existant material ou Inventaire empty (NE RIEN FAIRE)
// unequip method ne doit pas delete (prendre un pointeur)
// TOUT LES POINTEUR A NULL au depart
// LES ANCOIENS MATERIAUX D UN CHARACTER doive etre delete
// MEME CHOSE QUE DELETE
// NE TROUVE PAS DE DOC ICharacter.cpp
// A quoi correspond = 0 et puis Icharacter != Character

// I correspond donc a l interface il faut que je creer une class correspondante
//

class	AMateria;

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
