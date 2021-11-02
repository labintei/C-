/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:22:33 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 16:44:59 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void)
{
	Karen	a;

	a.complain("INFO");
	a.complain("DEBUG");
	a.complain("WARNING");
	a.complain("ERROR");

	return 0;
}
