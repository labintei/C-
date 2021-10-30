/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:48:32 by labintei          #+#    #+#             */
/*   Updated: 2021/10/30 18:32:08 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

// regarder comment les times stamps fonction implementer uniquement les 
// static int
// SERT POUR L AFFICHAGE GLOBAL DES ACCOUTS

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int			Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

int			Account::checkAmount(void) const
{
	return this->_amount;
}

void		Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:"<< Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_totalAmount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->getTotalAmount();
	std::cout << ":created" << std::endl;
	this->_nbAccounts++;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ":closed" << std::endl;
}

void		Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->getTotalAmount();
	std::cout << ";deposits:" << deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;

}

bool		Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if(this->_amount < withdrawal)
	{
		std::cout << "refused";
		std::cout << std::endl;
		return false;
	}
	else
	{
		std::cout << withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return true;
	}
}

void		Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << "deposits:" << this->_nbDeposits;
	std::cout << ";withdrawal:"<< this->_nbWithdrawals << std::endl;

}

void		Account::_displayTimestamp(void)
{
	time_t		t;
	struct	tm * timeinfo;

	time(&t);
	timeinfo = localtime(&t);

	std::cout << "[";
	std::cout << timeinfo->tm_year + 1900;
	std::cout << timeinfo->tm_mday;
	std::cout << timeinfo->tm_mon + 1;
	std::cout << "_";
	std::cout << timeinfo->tm_hour;
	std::cout << timeinfo->tm_min;
	std::cout << "]  ";
}

// Il va falloir ajouter get time stamps
// ECRIT DE CETTE FACON
// [2020|DAY|MOIS_HEURES|MINUTES|SECONDES]
