/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_bis.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:17:47 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 17:26:35 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Parent		{};
class	Child1 : public Parent {};
class	Child2 : public Parent {};

class	Unrelated				{};

int		main(void)
{
	Child1	a;

	Parent	*	b = &a;
	Child1	*	c = static_cast<Child1 *>(b);
	Child2	*	d = static_cast<Child2 *>(b);

	//Unrelated	*	e = static_cast<Unrelated *>(&a);
	// DETECTE LES CAST VERS DES CLASS NON APPARENTES (DANS UN M ARBRE HERITAGE)
	return 0;
}
