#pragma once


using namespace std;

class Branch
{
public:
	Branch();
	Branch(string, string);

	void setBranch(string, string);
	void setAddress(string);
	void setPhone(string);

	int getBranchID();
	string getAddress();
	string getPhone();
	int getNumofAccounts();

	void addAccount(Account&);
	void deleteAccount(Account&);
	void listAccounts();
	void listCustomers();
	void printBranchInfo();
	void printAccountInfo();
	void printCustomerInfo();





	~Branch();



private:
	static int IDcounter;
	int branchID;
	string branchAddress;
	string branchPhone;
	Account* branchAccounts;

	int numAccounts = 0;
};
