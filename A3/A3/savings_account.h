#pragma once



using namespace std;

class Savings_Account : public Account
{
public:
	Savings_Account();
	Savings_Account(double, double, Customer, int, double);
	
	void setAccountBalance(double);
	void setAccountFee(double);
	void setAccountOwner(Customer);
	void setMaxTransactions(int);
	void setInterestRate(double);


	int getAccountNum();
	double getAccountBalance();
	double getAccountFee();
	Customer getAccountOwner();
	int getMaxTransactions();
	double getInterestRate();

	bool isSavings();
	bool isChequing();

	~Savings_Account();


private:
	int max_transactions;
	double interest_rate;


};

