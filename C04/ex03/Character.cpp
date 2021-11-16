/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:30:52 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 21:33:10 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character(): _name("empty")
{
//	std::cout << "Create a empty Character" << std::endl;
}

Character::Character(std::string name): _name(name)
{
//	std::cout << "Create the Character " << this->_name << std::endl;
}

Character::~Character()
{
//	std::cout << "Destroy the Character : " << this->_name << std::endl;
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	for(int c = 0; c < 4; c++)
	{
		this->_materia[c] = rhs._materia[c];
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}


void	Character::equip(AMateria* m)
{
	int		j = 0;

	while(j < 4 && this->_materia[j] != NULL)
	{
		j++;
	}
	this->_materia[j] = m;
}

void	Character::unequip(int idx)
{
	if(idx < 0 || idx >= 4)
		std::cout << "Wrong index" << std::endl;
	else
	{
		this->_materia[idx] = NULL;
		std::cout << "Unequip index " << idx << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx < 0 || idx >= 4 ||  _materia[idx] == NULL)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	_materia[idx]->use(target);
}
