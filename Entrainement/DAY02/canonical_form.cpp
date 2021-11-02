/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canonical_form.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:30:25 by labintei          #+#    #+#             */
/*   Updated: 2021/10/27 18:12:26 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class		Sample{

	public :

		Sample(void);								//Canon
		Sample(int const n);
		Sample(Sample const & src);					//Canon
		~Sample(void);								//Canon

		Sample & operator=(Sample const & rhs);		//Canon
		int		getfoo(void) const;
	private :
		int _foo;
};

std::ostream &		operator<<( std::ostream & o, Sample const & i);

Sample::Sample(void) : _foo(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Donne la valeur n a _foo
Sample::Sample(int const n) : _foo(n)
{
	std::cout << "Parametric constructor called" << std::endl;
}

// Va remplacer le Sample
Sample::Sample(Sample const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Sample::getfoo(void) const
{
	return this->_foo;
}

Sample &	Sample::operator=(Sample const & rhs)
{
	std::cout << "Assigment operator called" << std::endl;

	if(this != &rhs)
		this->_foo = rhs.getfoo();

	return *this;
}

std::ostream &		operator<<(std::ostream & a, Sample const & i)
{
	a << "The value is : " << i.getfoo();
	return a;
}

int			main()
{
	Sample		instance1;
	Sample		instance2(42);
	Sample		instance3( instance1 );

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return 0;
}
