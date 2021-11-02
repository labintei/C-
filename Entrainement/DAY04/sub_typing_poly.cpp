/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_typing_poly.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:48:05 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 13:04:33 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string>
#include	<iostream>

class	Character
{
	public:	
	//	void	sayHello(std::string const & target);
	virtual	void	sayHello(std::string const & target);
};

class	Cat
{
};

class	Warrior : public Character
{
	public:
	//	void	sayHello(std::string const & target); // overread une fonction
	virtual	void	sayHello(std::string const & target);
};

void		Character::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << std::endl;
}

void		Warrior::sayHello(std::string const & target)
{
	std::cout << "AAAAAAAAAAAAAAAAAAAATACKER " << target << std::endl;
}

int			main()
{
	Warrior*		a = new Warrior();

	// STATIQUE(premier type)			DYNAMIQUE	(attribution)
	Character*		b = new Warrior(); // On le type comme un Character

	// Un character n est pas un Warrior
	// Warrior*		c = new Character();
	// NE MARCHE PAS
	// Character*	d = new Cat()'
	
	a->sayHello("Studsss");

	// virtual dit que le linkage est dynamique et non statique
	// Recherche si il y a des sous classes et decendre dans l arbre d heritage
	// Ok cc est un warrior 
	b->sayHello("Studsss");
	return 0;
}
