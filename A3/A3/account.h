#pragma once


using namespace std;

class Account
{
public:
	Account();
	Account(double, double, Customer);
	
	virtual void setAccountBalance(double) = 0;
	virtual void setAccountFee(double) = 0;
	virtual void setAccountOwner(Customer) = 0;
	
	virtual int getAccountNum() = 0;
	virtual double getAccountBalance() = 0;
	virtual double getAccountFee() = 0;
	virtual Customer getAccountOwner() = 0;
	
	virtual bool isSavings() = 0;
	virtual bool isChequing() = 0;
	
	~Account();


protected:
	static int accountcounter;
	int accountNumber;

	double accountBalance;
	double accountFee;
	Customer accountOwner;
	
	bool SavingsType;
	bool ChequingType;
};

