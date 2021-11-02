/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:21:31 by labintei          #+#    #+#             */
/*   Updated: 2021/10/29 14:35:28 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

// Vertex.class.tpp // POUR LES TEMPLATES // PLUSIEURS STANDARD

template< typename T = float>

// Si on ne te dit pas le type alors il s agit de flottant

class	Vertex
{
	public :
		Vertex( T const & x, T const & y, T const & z) : _x(x) , _y(y), _z(z){}
		~Vertex(void){}

		T const & getX(void) const {return this->_x;}
		T const & getY(void) const {return this->_y;}
		T const & getZ(void) const {return this->_z;}

	private :
		T const _x;
		T const _y;
		T const _z;
		// Constructeur a trois parametres a utiliser obligatoirement
		Vertex(void);
};


// J ajoute un operateur
// Cette surchage de fonction sera en realite le template d une surcharge 
// de fonction
// Pour utiliser le type T donc il faut specifie
template< typename T>
std::ostream & operator<<(std::ostream & a, Vertex< T > const & v)
{
	std::cout.precision( 1 );
	a << std::setiosflags(std::ios::fixed);
	a << "Vertex( " << v.getX() << "," << v.getY() << "," << v.getZ() << " )";
	return a;
}

int		main(void)
{
	Vertex< int >		v1( 12, 23, 34);
	// TYPE PAR DEFAULT
	Vertex<>			v2( 12, 23, 34);

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return 0;
}
