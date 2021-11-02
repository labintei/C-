/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:03:15 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 17:10:22 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// NE PLUS JAMAIS UTILISER LA MEME SYNTAXE
// C++ != C
// UPCAST ET DOWNCAST
//
//
class	Parent{};
class	Child1 : public Parent {};
class	Child2 : public Parent {};

int		main(void)
{
	Child1	a;

	Parent	*	b = &a;
	Parent	*	c = (Parent *) &a;

	Parent	*	d = &a;
	Child1	*	e = d; // IMPOSSIBLE
	Child2	*	f = (Child2 *)d; // NE FONCTIONNERA PAS
	// Un cast specifique pour chaque Cast
}
