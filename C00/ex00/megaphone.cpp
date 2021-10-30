/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:23:19 by labintei          #+#    #+#             */
/*   Updated: 2021/10/29 17:07:27 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
	}
	else
	{
		for(int i(1); i < argc; i++)
		{
			for(int j(0); argv[i][j]; j++)
			{
				if(islower(argv[i][j]))
					argv[i][j] = toupper(argv[i][j]);
				std::cout << argv[i][j];
			}
		}
		std::cout << std::endl;
	}
}
