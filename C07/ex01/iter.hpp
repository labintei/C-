/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:43:16 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 12:56:13 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ITER_HPP
#define		ITER_HPP

#include <iostream>

// first adress of the array (Premier elements t)
// second lenght of the array (iter jusqu a l)
// third fonction appelle pour chaque element de l array

template<typename t>
void	function(t & a)
{
	if(a >= 'a' && a <= 'z')
		a -= 32;
}

template<typename t>
void	iter(t x[], int const & l, void function(t & elem))
{
	for(int j=0; j < l ; j++)
		function(x[j]);
}

#endif
