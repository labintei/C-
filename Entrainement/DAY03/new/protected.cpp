/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protected.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:40:07 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 12:46:52 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	Quadruped
{
	private:
		std::string		name; // Seulement Acessible au niveau d un Quadruped Object pas accesible a partir de Dog
	protected:
		Leg					legs[4]; // Acessible a partir d un quadruped ou objets derives
	public:
		void			run(); // Acessible partout
};

class	Dog : public Quadruped
{

};

// HERITE PUBLIC PROTECTED PRIVATE (NIVEAU D ENCAPSULATION D HERITAGE)
// HERITAGE MULTIPLE ANIMAL->QUADRUPED     CHIEN qui herite des deux (conflit)
// HERITAGE EN DIAMANT ??
