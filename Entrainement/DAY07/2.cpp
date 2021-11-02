/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:44:38 by labintei          #+#    #+#             */
/*   Updated: 2021/10/29 15:30:28 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <iostream>

// SPECIALIZATION TEMPLATE
// CERTAINS TYPES PARTICULIER
//
template< typename T, typename U>
class Pair
{
	public:

		Pair<T, U>(T const & lhs, U const & rhs) : _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Generic template" << std::endl;
			return ;
		}
		~Pair<T, U>(void) {}
		T const & get_rhs(void) const {return this->_lhs; }
		U const & get_lhs(void) const {return this->_rhs; }
	private:
		T const & _lhs;
		U const & _rhs;
		Pair< T, U>(void);
};

// int en premier type --> effectueras ces fonctions
template<typename U>
class Pair<int, U>
{
	public:
		Pair<int, U>(int lhs, U const & rhs) : _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Int partial specialization" << std::endl;
			return ;
		}
		~Pair<int, U>(void){}
		int		get_lhs(void) const {return this->_lhs;}
		U const &	get_rhs(void) const {return this->_rhs;}
	private:
		int			_lhs;
		U const &	_rhs;
		Pair<int, U>(void);
};

// Same mais uniquement avec deux booleens plus besoin de specialiser 
// plusieurs types
template<>
class Pair<bool, bool>
{
	public:
		Pair<bool, bool>(bool lhs, bool rhs)
		{
			std::cout << "Bool\\Bool specialization" << std::endl;
			this->_n = 0;
			this->_n |= static_cast<int>(lhs) << 0;
			this->_n |= static_cast<int>(rhs) << 1;
			return;
		}
		~Pair<bool, bool>(void){}
		bool	get_lhs(void) const {return (this->_n & 0x01); }
		bool	get_rhs(void) const {return (this->_n & 0x02); }
	private:
		int		_n;
		Pair<bool, bool>(void);
};

template< typename T, typename U>
std::ostream & operator<<(std::ostream & a, Pair<T, U> const & p)
{
	a << "Pair( " << p.get_lhs() << "," << p.get_rhs() << " )";
	return a;
}

std::ostream & operator<<(std::ostream & a, Pair<bool, bool> const & p)
{
	a << "Pair( " << p.get_lhs() << "," << p.get_rhs() << " )";
	return a;
}

int		main(void)
{
	Pair<int, int>				p1(4, 2);
	Pair< std::string, float>	p2(std::string(" Pi "), 3.14f);
	Pair< float, bool>			p3(4.2f, true);
	Pair<bool, bool>			p4(true, false);

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;

	return 0;

}
