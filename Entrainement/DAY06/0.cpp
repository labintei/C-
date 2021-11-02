/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:55:58 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 16:21:31 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>

// REPRESENTATION BINAIRE
// PERTE DE PRECISION INT -> DOUBLE (par exemple)
// SINON OVERFLOW
// CONVERSION VA T ELLE ME FAIRE PERDRE DE LA PRECISION ?

int		main(void)
{
	int		a = 42;
	double	b = a;
	double	c = (double) a; // Cast explicit
	
	double	d = a;	// Comportement hasardeux Cast implicit
	int		e = d;
	int		f = (int)d;

	// Rajouter			-W_noconversion

	printf("%d\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	printf("%f\n", d);
	printf("%d\n", e);
	printf("%d\n", f);

	return 0;
}
