/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:39:15 by labintei          #+#    #+#             */
/*   Updated: 2021/11/04 12:32:09 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICE_HPP
#define		ICE_HPP

#include "AMateria.hpp"

//template< typename ice = Ice >

class		Ice : public AMateria
{
	public:
		Ice(std::string const & type);
		~Ice(void);
		void		use(ICharacter *target);
};




#endif
