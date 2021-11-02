/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:10:42 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 17:17:30 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// STATC CAST
//
// CONVERSION : REINTERPRETATION : QUALIFIEURS DE TYPES : UPCAST : DOWNCAST
// 5 ACTIONS DE CAST POSSIBLES
// PREMIER CAST (STATIC CAST) CONVERSION SIMPLE ET NAVIGUATION DANS ARBRE 
// D HERITAGE
//


int		main(void)
{
	int		a = 42;
	double	b = a;
	int		c = b;
	//Je souhaite static cast b(double) en int (downcast)
	int		d = static_cast<int>(b);

	return 0;
}
