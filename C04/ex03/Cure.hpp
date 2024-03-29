/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:34:52 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 21:17:32 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CURE_HPP
#define		CURE_HPP

#include "AMateria.hpp"

// LEUR TYPE SERA NOMME EN MINUSCULE cure->type
//
// REGARDER entraienment C07 pour utilisation des templates

//template< typename cure = Cure>

class		Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &rhs);
		// PEUT ETRE LE FAIRE AVEC un const Cure const rhs
		// Ou avec un poerateur =
		// Renvoyer un clone AMateria* clone() const 
		~Cure(void);
		void	use(ICharacter& target);
		AMateria* clone()const;
};

#endif
