/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:18:36 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 19:22:47 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// REINTERPRET CAST
// le plus permissif n importe quel adresse vers n importe quel autre adresse

// Pour les retypages (flux d octet stocker dans un (void *) puis on dois les 
// reinterpreter comme le type choisi

// Si on se trompe grosse consequence qui fait mal

int		main(void)
{
	float		a = 420.042f;

	void	*	b  =&a;
	int		*	c = reinterpret_cast<int *>(b);
	int		&	d = reinterpret_cast<int &>(b);

	return 0;
}
