/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:27:40 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 22:44:18 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Pointeurs peut pointer sur NULL alors qu une reference doit toujours
// exister

class		Student
{
	private:
			std::string	_login;
	public:
			Student(std::string const & login): _login(login)
			{
			}
			std::string&		getloginRef()
			{
				return this->_login;
			}
			std::string const & getloginRefConst() const
			{
				return this->_login;
			}
			std::string*		getloginPtr()
			{
				return &(this->_login);
			}
			std::string const * getloginPtrConst() const
			{
				return &(this->_login);
			}
};

int		main()
{
	Student		bob = Student("labintei");
	Student	const	lau = Student("lbintein");

	std::cout << bob.getloginRefConst() << "   " << lau.getloginRefConst() << std::endl;
	std::cout << *(bob.getloginPtrConst()) << "  " << *(lau.getloginPtrConst()) << std::endl;

	bob.getloginRef() = "Laurannnnnee";
	std::cout << bob.getloginRefConst() << std::endl;

	*(bob.getloginPtr()) = "Bintein";
	std::cout << bob.getloginRefConst() << std::endl;
}
