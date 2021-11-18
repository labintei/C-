/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:05:15 by labintei          #+#    #+#             */
/*   Updated: 2021/11/17 22:14:21 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

class	Base
{
	public:
		virtual ~Base(){};
};

class	A: public Base{};
class	B: public Base{};
class	C: public Base{};


Base	*	generate(void)
{
	Base	*a;
	std::srand (std::time(NULL));
	int		i = std::rand() % 3;

	if(i == 0)
		a = new A;
	if(i == 1)
		a = new B;
	if(i == 2)
		a = new C;
	return a;
}

void		identify(Base *p)
{
	// Affiche "A" "B" ou "C" selon le type reel de p
	A* castA  = dynamic_cast<A *>(p);
	B* castB = dynamic_cast<B *>(p);
	C* castC = dynamic_cast<C *>(p);

	if(castA != NULL)
		std::cout << "A" << std::endl;
	if(castB != NULL)
		std::cout << "B" << std::endl;
	if(castC!= NULL)
		std::cout << "C" << std::endl;
}

void		identify(Base &p)
{
	try
	{
		A& castA = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(...){;}
	try
	{
		B& castB = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(...){;}
	try
	{
		C& castC = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(...){;}
	// On utilisera pas de pointeur dans cette fonction
	// Affichera "A" "B" ou "C" en fonction du type reel
}

int		main(int argc, char **argv)
{
	Base	*a = generate();
	Base	*b = generate();

	identify(*a);
	identify(a);
	identify(*b);
	identify(b);

	Base	*c = generate();
	identify(*c);
	identify(c);

}
