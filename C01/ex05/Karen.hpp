/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:23:27 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 16:54:33 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		KAREN_HPP
#define		KAREN_HPP

#include <iostream>
#include <string>
#include <map>

class		Karen;
		typedef		void	(Karen:: *p)();

class		Karen
{
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::map<std::string, p>	_p;
};

#endif
