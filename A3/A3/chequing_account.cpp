#include "pch.h"
#include <iostream>
#include "account.h"
#include "chequing_account.h"
#include "customer.h"



Chequing_Account::Chequing_Account() : Account()
{
	SavingsType = false;
	ChequingType = true;
}

Chequing_Account::Chequing_Account(double balance, double fee, Customer owner, bool canwrite, double overdraft) : Account(balance, fee, owner)
{
	can_write_cheques = canwrite;
	overdraft_limit = overdraft;
}

void Chequing_Account::setAccountBalance(double balance)
{
	accountBalance = balance;
}
void Chequing_Account::setAccountFee(double fee)
{
	accountFee = fee;
}
void Chequing_Account::setAccountOwner(Customer owner)
{
	accountOwner = owner;
}
void Chequing_Account::setCanWriteCheques(bool canwrite)
{
	can_write_cheques = canwrite;
}
void Chequing_Account::setOverdraftLimit(double overdraft)
{
	overdraft_limit = overdraft;
}

int Chequing_Account::getAccountNum()
{
	return accountNumber;
}
double Chequing_Account::getAccountBalance()
{
	return accountBalance;
}
double Chequing_Account::getAccountFee()
{
	return accountFee;
}
Customer Chequing_Account::getAccountOwner()
{
	return accountOwner;
}
bool Chequing_Account::getCanWriteCheques()
{
	return can_write_cheques;
}
double Chequing_Account::getOverdraftLimit()
{
	return overdraft_limit;
}

bool Chequing_Account::isSavings()
{
	return false;
}

bool Chequing_Account::isChequing()
{
	return true;
}





Chequing_Account::~Chequing_Account()
{
}
