/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:29:20 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 21:32:36 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ICharacter.hpp"

class ICharacter;

class		AMateria
{
	protected:
		std::string		type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		std::string const & getType() const; // Returns the materia type
		//		IL FAUT CREER UNE CLONE METHODE
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
