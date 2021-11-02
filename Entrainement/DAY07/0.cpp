/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:45:37 by labintei          #+#    #+#             */
/*   Updated: 2021/10/29 13:06:42 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// PERMET D ECRIRE DES TEMPLATES
// COMPILATEURS QUI GENERE DU CODE A VOTRE PLACE
// Utilisation complique
// Macro parametric de C

// COMPARAISON DE TYPE QUELQUONQUE MAIS HOMOGENE

// Declaration d un template et declaration d un type t

template< typename t>
// PEUT ETRE PAS JUSTE UN ENTIER OU UN FLOTTANT
// PRENDRE PARAMETRE PAR REFERENCE

t	const &		max(t const & x, t const & y)
{
	return ( x >= y ? x : y);
}

int		foo(int x)
{
	std::cout << "Long computing time" << std::endl;
	return x;
}

// DEUX MOYEN DE FAIRE UNE INSTANCIATION 
// EXPLICIT <float>
// IMPLICIT (ne rien marquer)

int		main(void)
{
	int		a = 21;
	int		b = 42;

	std::cout << "Max of " << a << " and " << b << " is " << max<int>(a,b) << std::endl;
	std::cout << "Max of " << a << " and " << b << " is " << max(a,b) << std::endl;

	float	c = -1.7f;
	float	d = 4.2f;

	std::cout << "Max of " << c << " and " << d << " is " << max<float>(c,d) << std::endl;
	std::cout << "Max of " << c << " and " << d << " is " << max(c,d) << std::endl;

	char	e = 'a';
	char	f = 'z';

	std::cout << "Max of " << e << " and " << f << " is " << max<char>(e,f) << std::endl;
	std::cout << "Max of " << e << " and " << f << " is " << max(e,f) << std::endl;

	int		ret = max<int>(foo(a), foo(b));
	std::cout << "Max of " << a << " and " << b << " is " << ret << std::endl;

	return 0;
}
