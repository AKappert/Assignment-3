#include "pch.h"
#include <iostream>
#include <string>
#include "account.h"
//#include "savings_account.h"
//#include "chequing_account.h"
#include "customer.h"


using namespace std;


int::Customer::IDcounter = 1;

Customer::Customer()
{
	customerID = IDcounter;
	IDcounter++;

	customerFName = nullptr;
	customerLName = nullptr;
	customerAddress = nullptr;
	customerPhone = nullptr;
	customerEmail = nullptr;
	accountlist = NULL;
	
}
Customer::Customer(string& fname, string& lname, string& address, string& phone, string& email)
{
	customerID = IDcounter;
	IDcounter++;

	customerFName = { fname };
	customerLName = { lname };
	customerAddress = { address };
	customerPhone = { phone };
	customerEmail = { email };
	accountlist = NULL;

}

void Customer::setCustomer(string& fname, string& lname, string& address, string& phone, string& email)
{
	customerFName = { fname };
	customerLName = { lname };
	customerAddress = { address };
	customerPhone = { phone };
	customerEmail = { email };
	accountlist = NULL;
}
void Customer::setFirstName(string& fname)
{
	customerFName = fname;
}
void Customer::setLastName(string& lname)
{
	customerLName = lname;
}
void Customer::setAddress(string& address)
{
	customerAddress = address;
}
void Customer::setPhone(string& phone)
{
	customerPhone = phone;
}
void Customer::setEmail(string& email)
{
	customerEmail = email;
}

string Customer::getFirstName()
{
	return customerFName;
}
string Customer::getLastName()
{
	return customerLName;
}
string Customer::getAddress()
{
	return customerAddress;
}
string Customer::getPhone()
{
	return customerPhone;
}
string Customer::getEmail()
{
	return customerEmail;
}

void Customer::addAccount(Account& account)
{
	accountlist[numAccounts] = account;
	numAccounts++;

}
void Customer::deleteAccount(Account& account)
{
	for (int i = 0; i < numAccounts; i++)
	{
		if (accountlist[i].getAccountNum() == account.getAccountNum())
		{
			for (int j = i; j < numAccounts - 1; j++)
			{
				accountlist[j] = accountlist[j + 1];
			}
			numAccounts--;
			return;
		}
	}
	cout << "This customer (" << customerFName << ", " << customerLName << ") does not have this account (" << account.getAccountNum() << ")";
}
void Customer::listAccounts()
{
	for (int i = 0; i < numAccounts; i++)
	{
		cout << "\nAccount ID: ";	accountlist[i].getAccountNum();
	}

}
void Customer::listSavingAccounts()
{
	for (int i = 0; i < numAccounts; i++)
	{
		if (accountlist[i].isSavings() == true)
		{
			cout << "\nAccount ID: ";	accountlist[i].getAccountNum();
		}
	}
	
}
void Customer::listChequingAccounts()
{
	for (int i = 0; i < numAccounts; i++)
	{
		if (accountlist[i].isChequing() == true)
		{
			cout << "\nAccount ID: ";	accountlist[i].getAccountNum();
		}
	}


}



void Customer::printInfo()
{
	cout << "\nCustomer ID: " << customerID;
	cout << "\nCustomer First: " << customerFName;
	cout << "\nCustomer Last: " << customerLName;
	cout << "\nCustomer Address: " << customerAddress;
	cout << "\nCustomer Phone: " << customerPhone;
	cout << "\nCustomer Email: " << customerEmail;
	cout << "\nNumber of Accounts:  " << numAccounts;

}

Customer::~Customer()
{
}
