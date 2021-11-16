/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:17:49 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 21:34:39 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int j=0; j < 4; j++)
	{
		this->_materia_s[j] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for(int j=0 ; j < 4 ; j++)
	{
		delete _materia_s[j];
	}
//	std::cout << "Delete MateriaSource" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for(int c = 0; c < 4 ; c++)
	{
		delete _materia_s[c];
	}
	for(int i = 0; i < 4 ; i++)
	{
		// NEED A CLONE rhs.materia_s[i].clone()
		_materia_s[i] = rhs._materia_s[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int j = 0;
	while(j < 4 && this->_materia_s[j])
	{
		j++;
	}
	if(j >= 3)
	{
		std::cout << "Trop de Materiaux" << std::endl;
	}
	else
	{
		this->_materia_s[j] = m;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for(int j = 0; (j < 4 && _materia_s[j] != NULL); j++)
	{
		if(type == _materia_s[j]->getType())
		{
			return _materia_s[j];
		}
	}
	std::cout << "Materiaux inexistant" << std::endl;
	return NULL;
}
