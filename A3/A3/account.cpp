#include "pch.h"
#include <iostream>
#include "account.h"
#include "savings_account.h"
#include "chequing_account.h"
//#include "customer.h"


using namespace std;


int::Account::accountcounter = 1;

Account::Account()
{
	accountNumber = accountcounter;
	accountcounter++;

	accountBalance = 0;
	accountFee = 0;
	accountOwner = Customer();
}

Account::Account(double balance, double fee, Customer owner)
{
	accountNumber = accountcounter;
	accountcounter++;
	accountBalance = balance;
	accountFee = fee;
	accountOwner = owner;
}


Account::~Account()
{
}
