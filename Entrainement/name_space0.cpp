/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_space0.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:41:12 by labintei          #+#    #+#             */
/*   Updated: 2021/10/13 14:00:43 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NOTION 0 NAMESPACE
// permet de regrouper des symboles des fonctions dans un grand_emsemble
// using namespace std 


#include <stdio.h>

int		gl_var = 1;
int		f( void ) {return 2; }

namespace	foo
{
	int	gl_var = 3;
	int	f( void ) {return 4; }
}

namespace	Bar
{
	int	gl_var = 5;
	int	f( void ) {return 6; }
}

namespace Muf = Bar;

int		main()
{
	printf("gl_var %d\n", gl_var);
	printf("f()  %d\n", f());
	printf("foo::gl_var %d\n", foo::gl_var);
	printf("foo::f()  %d\n", foo::f());
	printf("Bar::gl_var %d\n", Bar::gl_var);
	printf("Bar::f()  %d\n", Bar::f());
	printf("Muf::gl_var %d\n", Muf::gl_var);
	printf("Muf::f()  %d\n", Muf::f());
	printf("::gl_var %d\n", ::gl_var);
	printf("::f()  %d\n", ::f());
	return 0;
}
