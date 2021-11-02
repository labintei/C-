/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:56:06 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 18:13:35 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int	argc, char **argv)
{
	Karen	a;
	if(argc == 2)
		a.complain(argv[1]);
	else
		a.complain("default");
	return 0;
}
