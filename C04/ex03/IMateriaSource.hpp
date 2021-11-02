/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:40:16 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 21:48:40 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		IMATERIASOURCE_HPP
#define		IMATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual	AMateria* createMateria(std::string const & type) = 0;
};

#endif
