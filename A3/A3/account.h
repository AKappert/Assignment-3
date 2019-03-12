#pragma once


using namespace std;

//class Customer;

class Account
{
public:
	Account();
	Account(double&, double&, string&);
	
	virtual void setAccountBalance(double&) = 0;
	virtual void setAccountFee(double&) = 0;
	virtual void setAccountOwner(string&) = 0;
	
	virtual int getAccountNum() = 0;
	virtual double getAccountBalance() = 0;
	virtual double getAccountFee() = 0;
	virtual string getAccountOwner() = 0;
	
	virtual bool isSavings() = 0;
	virtual bool isChequing() = 0;
	
	~Account();


protected:
	static int accountcounter;
	int accountNumber;

	double accountBalance;
	double accountFee;
	string accountOwner;
	
	bool SavingsType;
	bool ChequingType;
};

