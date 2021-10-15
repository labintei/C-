/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:55:04 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 17:09:15 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/visibility.hpp"

// Convention de l underscore pour classifie les privees et public

Sample::Sample() : pub(33), _priv(42)
{
	std::cout << "Constr" << std::endl;
	std::cout << this->pub << std::endl;
	std::cout << this->_priv << std::endl;

}

Sample::~Sample()
{
	std::cout << "Destr" << std::endl;
}

void	Sample::_privbar() const
{
	std::cout << "Private" << std::endl;
	std::cout << this->pub << std::endl;
	std::cout << this->_priv << std::endl;

}

void	Sample::pubbar() const
{
	std::cout << "Public" << std::endl;
	std::cout << this->pub << std::endl;
}

int		main()
{
	Sample inst;

//	inst._privbar();
	inst.pubbar();
	return 0;
}
