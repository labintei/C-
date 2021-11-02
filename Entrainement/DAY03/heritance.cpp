/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritance.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:20:56 by labintei          #+#    #+#             */
/*   Updated: 2021/10/27 20:16:06 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class		Animal
{
	private:
		int		_n;
	public:
		Animal();
		Animal(Animal const &);
		Animal& operator=(Animal const &);
		~Animal();

		void	run(int d);
		void	call();
		void	eat(std::string const & what);
		void	walk(int d);
};

class		Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		~Cat();

		void		s(std::string const & target);
};

class		Pony : public Animal
{
	public:
		Pony();
		Pony(Pony const &);
		Pony& operator=(Pony const &);
		~Pony();

		void	do_m(std::string const & target);
		void	run(int d);
};

class		Quadruped
{
	private:
		std::string		name;
	protected:
		Leg				n[4];
	public
		void			run();
};

class		Dog : public Quadruped
{

};


void		Animal::run(int d)
{
	std::cout << "L animal run : " << d << " m" << std::endl;
}

void		Animal::eat(std::string const & what)
{
	std::cout << "L Animal a mange " << what << std::endl;
}






