/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:36:13 by labintei          #+#    #+#             */
/*   Updated: 2021/10/29 12:39:31 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// EXPLICIT KEYWORD
// Semantique proche des constructeur
// C++

class	A {};
class	B {};

class	C
{
	public:
					C( A const & _ ) {return; }
		explicit	C( B const & _ ) {return; }
};

void		f( C const & _ )
{
	return ;
}

int		main(void)
{
	f( A() ); // conversion implicit de A vers C work
	
	//f( B() ); // Ne marche pas car EXPLICIT
				// Permet d interdir la conversion implicit de A vers B
				// faudra construire explicitement une instance avant de la 
				// passer en parametre

	return 0;
}
