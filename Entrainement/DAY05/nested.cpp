/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:34:02 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 14:37:34 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// Class imbrique

class	Cat
{
	public:
	class	Leg
	{
		int		griffes;
		int		cousinets;
	};
};

class	Dog
{
	public:
	class	Leg
	{
		int		poils;
		int		morsures;
	};
};

int		main()
{
	Cat			Cat;
	Cat::Leg	standardleg;
}
