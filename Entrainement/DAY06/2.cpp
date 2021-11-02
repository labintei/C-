/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:39:39 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 17:03:02 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// REINTERPRETATION MAIS UN PEU PLUS
// CAST DE TYPE QUALIFIER CONST OU VOLATILE
//
//ADRESSE D UN INT CONST PLUS HAUTE QUE ADRESSE D UN INT SIMPLE

int			main(void)
{
	int		a  = 42;
	int	const	* b = &a;
	int	const	* c = (int const *) &a;

	int	const	* d = &a;
	// Refus de la demotion
	// cast non constant type constant vers non constant
//	int	*	e = d;

	// Il est mieux de ne pas l utiliser
	int	*	f = (int *) d;

	return 0;
}
