#include "pch.h"
#include <iostream>
#include <string>
//#include "customer.h"
#include "account.h"
#include "savings_account.h"
#include "chequing_account.h"



using namespace std;


int::Account::accountcounter = 1;

Account::Account()
{
	accountNumber = accountcounter;
	accountcounter++;

	accountBalance = 0;
	accountFee = 0;
	accountOwner = nullptr;
}

Account::Account(double& balance, double& fee, string& owner)
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
