#pragma once


using namespace std;

//class Account;

class Customer
{
public:
	Customer();
	Customer(string&, string&, string&, string&, string&);
	
	void setCustomer(string&, string&, string&, string&, string&);
	void setFirstName(string&);
	void setLastName(string&);
	void setAddress(string&);
	void setPhone(string&);
	void setEmail(string&);
	
	string getFirstName();
	string getLastName();
	string getAddress();
	string getPhone();
	string getEmail();

	void addAccount(Account&);
	void deleteAccount(Account&);
	void listAccounts();
	void listSavingAccounts();
	void listChequingAccounts();

	void printInfo();
	~Customer();


private:
	static int IDcounter;
	int customerID;
	string customerFName;
	string customerLName;
	string customerAddress;
	string customerPhone;
	string customerEmail;
	Account* accountlist;

	int numAccounts = 0;
	
};

