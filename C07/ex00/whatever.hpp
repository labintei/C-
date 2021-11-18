/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:17:56 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 12:18:12 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	WHATEVER_HPP
#define	WHATEVER_HPP

#include <iostream>
#include <string>

template<typename t>
t const & max(t const & x, t const &y)
{
	return (x >= y ? x : y);
}

template<typename t>
t const & min(t const & x, t const &y)
{
	return (x <= y ? x : y);
}

template<typename t>
void	swap(t & x, t & y)
{
	t temp = x;
	x = y;
	y = temp;
}

#endif
