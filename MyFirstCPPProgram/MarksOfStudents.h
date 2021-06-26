#pragma once
int add(int marksPhysics, int marksChemistry);
int add(int marksPhysics, int marksChemistry, int marksLab );  // Default value

double add(double marksPhysics, double marksChemistry);
int add(double marksPhysics, double marksChemistry, double marksLab);   // Default value

struct Account {
private: 
	int _accountNumber;
	int _balance;
	double _interest;
	void InterestAddedThisYear() {
		_interest = 12 * (10 / 100) * 100;
		_balance += _interest;
	}
public: 
	int GetBalance() {
		return _balance;
	}

	void SetBalance(double amount) {

	}

};