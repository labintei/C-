/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:21:45 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 16:36:07 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>
// Conversion identitaire (garde les memes bits dans le meme ordre)
// void * est une adresse plus generale

int		main(void)
{
	float	a = 420.042f;
	void * b = &a;
	void * c = (void *)&a;

	void * d = &a;
//	int * e = d;		// type plus generale vers un type plus precis devotion erreur
					// Demotion (gain precision)
					// Promotion (perte precision)
	int  * f = (int *)d;

	printf("%p, %f\n", &a, a);
	printf("%p\n", b);
	printf("%p\n", c);
	printf("%p\n", d);
//	printf("%p, %d\n", e , *e);
	printf("%p, %d\n", f, *f);
	return 0;
}
