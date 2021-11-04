/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:34:52 by labintei          #+#    #+#             */
/*   Updated: 2021/11/04 12:35:52 by labintei         ###   ########.fr       */
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
		~Cure(void);
		void	use(ICharacter *target);
};



#endif
