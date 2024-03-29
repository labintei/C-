/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:40:16 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 17:45:43 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		IMATERIASOURCE_HPP
#define		IMATERIASOURCE_HPP

#include "AMateria.hpp"

// learnmateria copy le Materia en paramtre et le store en memoire pour etre 
// clone plus tard
// La source ne peut pas connaitre plus de 4 Material
//
// create materia va retourner un Nouveau Materia qui sera une copy du Materia 
// precedemment apris dans source duquel les type sont egaux aux parametre
// UNKNOW  return 0 if the type UNKNOW
//
// dOIT ETER CAPABLE D APPRENDRE DES TEMPLATTES of Materia et les recreer sur 
// demande


// LES I NE NECESSITE PAS DE FONCTION CPP des qu il y a l utilisation function=0
// et des virtuals void

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {};
		virtual void learnMateria(AMateria*) = 0;
		virtual	AMateria* createMateria(std::string const & type) = 0;
};

#endif
