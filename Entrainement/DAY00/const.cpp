/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:41:51 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 16:54:10 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/const.hpp"

// DEUX FACON D UTILISER CONST
// Dans la class
// Ou dans les fonctions
// On signifie que cette fonction membre ne modifie pas les variables 
// en entree de fonctions

Sample::Sample(float const b): pi(b), a(42)
{
	std::cout << "Construct" << std::endl;
	std::cout << this->pi << std::endl;
}

Sample::~Sample()
{
	std::cout << "Destruct" << std::endl;
}

void	Sample::bar(void) const
{
	std::cout << " PI " << this->pi << std::endl;
	std::cout << " A " << this->a << std::endl;
}

int		main()
{
	Sample	inst(3.14);
	inst.bar();
	return 0;
}
