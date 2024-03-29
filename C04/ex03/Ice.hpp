/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:39:15 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 21:18:39 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICE_HPP
#define		ICE_HPP

#include "AMateria.hpp"

//template< typename ice = Ice >

class		Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & rhs);
		~Ice(void);
		void		use(ICharacter& target);
		AMateria*	clone() const;
};




#endif
