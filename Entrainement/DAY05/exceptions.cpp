/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:37:49 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 22:36:36 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include <stdexcept>

// Peut etre ijmbrique

void	test2()
{
	if("Error")
	{
		throw std::exception();
	}
	else
	{
		std::cout << "Ok" << std::endl;
	}
}

// On peut catcher par reference

void	test3()
{
	try
	{
		test2();
	}
	catch(std::exception& e)
	{
		std::cout << "Error" << std::endl;
	}
}

// test1
void	test1()
{
	 // essayer de faire quelque chose // Si erreur lancer une exceptioni va chercher un bloc cath qui va gerer l erreurs
	try
	{
		if("Error")
		{
			throw std::exception();
		}
		else
		{
			std::cout << "Ok" << std::endl;
		}
	}
	catch (std::exception e)
	{
		std::cout << "Error" << std::endl;
	}
}

// Utilisation exceptionelles couteux en ressources 
// plutot qu une valeur d erreur
// Ou si c est exceprtionelle (fonction systeme -> new plus de memoire 
// renvoit une exception ... open ...)

void	test4()
{
	class	ERRexception : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("user");
			}
	};

	try
	{
		test3();
	}
	// SI ERRexception 
	catch (ERRexception& e)
	{
		std::cout << "????" << std::endl;
	}
	// TOUT AUTRE EXCEPTION
	catch (std::exception& e)
	{
		std::cout << "General exception" << std::endl;
	}
}
