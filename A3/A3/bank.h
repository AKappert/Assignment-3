#pragma once



class Bank
{





public:
	Bank();
	~Bank();


private:
	int bankID;
	string bankName;
	string bankAddress;
	string bankPhone;
	Branch* bankBranches;

};

