/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:32:01 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 12:39:49 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class		Animal
{
	private:
		int			_numberlegs;
	public:
		Animal();
		Animal(Animal const &);
		Animal& operator=(Animal const &);
		~Animal();
	
		void		run(int d);
		void		call();
		void		eat(std::string const & what);
		void		walk(int d);
};

class		Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		~Cat();

		void	scorn(std::string const & target);
};

class		Pony : public Animal
{
	public:
		Pony();
		Pony(Pony const &);
		Pony& operator=(Pony const &);
		~Pony();

		void	run(int d); // Si le poney a une facon differente de courir 
							// dans ce cas la fonction run est remplacer
};


// Des comportements a gerer (Instancier animal et instancier chat)
