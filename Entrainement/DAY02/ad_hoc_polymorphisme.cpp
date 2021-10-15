/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ad_hoc_polymorphisme.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:56:09 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 23:09:43 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class		Sample
{
	public:
		Sample();
		~Sample();
		void	bar(char const c) const;
		void	bar(int const n) const;
		void	bar(float const f) const;
		void	bar( Sample const & l) const;
};

Sample::Sample()
{
	std::cout << "Constr" << std::endl;
}

Sample::~Sample()
{
	std::cout << "Destruct" << std::endl;
}

void	Sample::bar(char const c) const
{
	std::cout << "La fonction membre a etet apelle pour un char overload " << c << std::endl;
}

void	Sample::bar(int const n) const
{
	std::cout << "Pour un Int " << n << std::endl;
}

void	Sample::bar(float const f) const
{
	std::cout << "Pour un const f " << f << std::endl;
}

void	Sample::bar(Sample const & l) const
{
	(void)l;
	std::cout << "Pour la Class Sample " << std::endl;
}

int		main()
{
	Sample	a;
	char	c;
	float	f;
	int		i;

	i = 5;
	c = 'd';
	f = 45.45;
	a.bar(c);
	a.bar(i);
	a.bar(f);
	a.bar(a);

	return 0;
}
