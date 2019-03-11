#include "pch.h"
#include <iostream>
#include "account.h"
#include "savings_account.h"
#include "customer.h"


Savings_Account::Savings_Account() : Account()
{
	SavingsType = true;
	ChequingType = false;
}

Savings_Account::Savings_Account(double balance, double fee, Customer owner, int maxtrans, double interestrate) : Account(balance, fee, owner)
{
	max_transactions = maxtrans;
	interest_rate = interestrate;
}

void Savings_Account::setAccountBalance(double balance)
{
	accountBalance = balance;
}
void Savings_Account::setAccountFee(double fee)
{
	accountFee = fee;
}
void Savings_Account::setAccountOwner(Customer owner)
{
	accountOwner = owner;
}
void Savings_Account::setMaxTransactions(int maxtrans)
{
	max_transactions = maxtrans;
}
void Savings_Account::setInterestRate(double interestrate)
{
	interest_rate = interestrate;
}

int Savings_Account::getAccountNum()
{
	return accountNumber;
}
double Savings_Account::getAccountBalance()
{
	return accountBalance;
}
double Savings_Account::getAccountFee()
{
	return accountFee;
}
Customer Savings_Account::getAccountOwner()
{
	return accountOwner;
}
int Savings_Account::getMaxTransactions()
{
	return max_transactions;
}
double Savings_Account::getInterestRate()
{
	return interest_rate;
}

bool Savings_Account::isSavings()
{
	return true;
}

bool Savings_Account::isChequing()
{
	return false;
}





Savings_Account::~Savings_Account()
{
}
