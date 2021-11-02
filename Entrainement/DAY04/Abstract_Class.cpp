/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Abstract_Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:05:32 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 14:32:28 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class		ACharacter
{
	public:
		virtual void	attack(std::string const & target) = 0; // LA DEFINI COMME UNE METHODE PURE (pas d implementation 
																// On ne pourra pas l instancier (A) dit qu il s agit d un Abstract_Class
																// Un character devra pouvoir attacker mais ne pourra pas attacker par lui meme
		void			sayHello(std::string const & target);
};

class		Warrior : public ACharacter
{
	public:
		virtual	void	attack(std::string const & target);
};

void		ACharacter::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << std::endl;
}

// Pour creer une interface (uniquement des comportements abstraits)
// Les interface n ont aucun attribut (contrat) utiliser des objets derivees
//

class		ICoffeeMaker
{
	public:
		virtual void		remplireau(IWaterSource * src) = 0;
		virtual ICoffee*	makeCoffe(std::string const & type) = 0;
};

// Manipuler des types concret dans un tableau ou un containers

void		Warrior::attack(std::string const & target)
{
	std::cout << "Le Warrior a attacker " << target << std::endl;
}

int			main()
{
	ACharacter*		a = new		Warrior();
	
	// NE MARCHERA PAS
	// aCharacter* b = new ACharacter();
	// b->attack("Students"); NE MARCHERA PAS
	a->sayHello("Sutddsss");
	a->attack("Students");
}
