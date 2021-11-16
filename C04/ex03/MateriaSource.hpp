/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:06:03 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 21:30:15 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIASOURCE_HPP
#define	MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

// IL FAUT QUE JE CREER U OPERATEUR POUR LE new = 


class	MateriaSource: public IMateriaSource {
	public:
	// JE PEUT A LA LIMITE CREER UN CONSTRUCTEUR AVEC UNE CONST MateriaSOurce const
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource & operator=(MateriaSource const & rhs);
		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	protected:
		AMateria* _materia_s[4];
};

#endif
