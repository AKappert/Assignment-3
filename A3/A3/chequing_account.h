#pragma once


using namespace std;

class Chequing_Account: public Account
{
public:
	Chequing_Account();
	Chequing_Account(double&, double&, string&, bool&, double&);

	void setAccountBalance(double&);
	void setAccountFee(double&);
	void setAccountOwner(string&);
	void setCanWriteCheques(bool&);
	void setOverdraftLimit(double&);


	int getAccountNum();
	double getAccountBalance();
	double getAccountFee();
	string getAccountOwner();
	bool getCanWriteCheques();
	double getOverdraftLimit();

	bool isSavings();
	bool isChequing();

	~Chequing_Account();


private:
	bool can_write_cheques;
	double overdraft_limit;


};

