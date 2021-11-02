/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:14:06 by labintei          #+#    #+#             */
/*   Updated: 2021/10/27 18:20:44 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class		Cat
{
	private:
		int		_n;
	public:
		Cat();
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		~Cat();

		void	run(int d);
		void	s(std::string const & target);
};

class		Pony
{
	private:
		int		_n;
	public:
		Pony();
		Pony(Pony const &);
		Pony& operator=(Pony const &);
		~Pony();
		
		void	run(int d);
		void	doMagic(std::string const & target);
};


