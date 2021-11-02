/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:23:07 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 19:27:46 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// Const cast
//
// qualifieur de types
// Utiliser dans unn const cast c est un mauvais signe
// mieux vaut avoir le plus de valeur constante possible
// (il faut une bonne raison derriere)

int		main(void)
{
	int		a = 42;
	int	const	*	b = &a;
	//NE COMPILLE PAS
	//int		*	c = b;
	int		*	d = const_cast<int *>(b);

	return 0;
}
