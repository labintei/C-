/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:52:41 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 18:06:20 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		EASYFIND_HPP
#define		EASYFIND_HPP


///dtrimg
//vector list 
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

template< typename t>
typename t::iterator easyfind(t &a, int n)
{
	return std::find(a.begin(), a.end(), n);
}

#endif
