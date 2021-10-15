/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_delete.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:20:11 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 21:22:40 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEW_DELETE_HPP
#define NEW_DELETE_HPP

#include <string>

class	Student
{
	private:
		std::string	_login;
	public:
		Student(std::string login);
		~Student();
};

#endif
