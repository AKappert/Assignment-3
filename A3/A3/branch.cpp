#include "pch.h"
#include <iostream>
#include <string>

#include "account.h"
#include "savings_account.h"
#include "chequing_account.h"
#include "branch.h"

using namespace std;


int::Branch::IDcounter = 1;

Branch::Branch()
{
	branchID = IDcounter;
	IDcounter++;
	branchAddress = nullptr;
	branchPhone = nullptr;
	branchAccounts = NULL;
}
Branch::Branch(string address, string phone)
{
	branchID = IDcounter;
	IDcounter++;
	branchAddress = address;
	branchPhone = phone;
	branchAccounts = NULL;
}

void Branch::setBranch(string address, string phone)
{
	branchAddress = address;
	branchPhone = phone;
	branchAccounts = NULL;
}
void Branch::setAddress(string address)
{
	branchAddress = address;
}
void Branch::setPhone(string phone)
{
	branchPhone = phone;
}

int Branch::getBranchID()
{
	return branchID;
}
string Branch::getAddress()
{
	return branchAddress;
}
string Branch::getPhone()
{
	return branchPhone;
}
int Branch::getNumofAccounts()
{
	return numAccounts;
}
void Branch::addAccount(Account& account)
{
	branchAccounts[numAccounts] = account;
	numAccounts++;
}
void Branch::deleteAccount(Account& account)
{
	for (int i = 0; i < numAccounts; i++)
	{
		if (branchAccounts[i].getAccountNum() == account.getAccountNum())
		{
			for (int j = i; j < numAccounts - 1; j++)
			{
				branchAccounts[j] = branchAccounts[j + 1];
			}
			numAccounts--;
			return;
		}
	}


}
void Branch::listAccounts()
{
	for (int i = 0; i < numAccounts; i++)
	{
		cout << "\nAccount ID: ";	branchAccounts[i].getAccountNum();
	}

}

void Branch::listCustomers()
{
	for (int i = 0; i < numAccounts; i++)
	{

		branchAccounts[i].getAccountOwner();



	}



}








Branch::~Branch()
{
}
