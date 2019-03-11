#pragma once


using namespace std;

class Chequing_Account: public Account
{
public:
	Chequing_Account();
	Chequing_Account(double, double, Customer, bool, double);

	void setAccountBalance(double);
	void setAccountFee(double);
	void setAccountOwner(Customer);
	void setCanWriteCheques(bool);
	void setOverdraftLimit(double);


	int getAccountNum();
	double getAccountBalance();
	double getAccountFee();
	Customer getAccountOwner();
	bool getCanWriteCheques();
	double getOverdraftLimit();

	bool isSavings();
	bool isChequing();

	~Chequing_Account();


private:
	bool can_write_cheques;
	double overdraft_limit;


};

