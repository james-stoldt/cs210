/*
* ---------------------
* SNHU CS-210 Module 5
* ---------------------
* Program: Compound Interest Calculator
* Developer: James Stoldt
* Modified: 4/7/24
* 
* ~Investment Class Inferface~
* Represents an investment based on an initial investment amount, additional monthly deposit amounts,
* interest rate, and number of years.
* 
*/

#ifndef INVESTMENT_CLASS
#define INVESTMENT_CLASS

class Investment
{
public:
	//constructors
	Investment();
	Investment(double initInvestment, double monthlyDeposit, double interestPercent, int numYears);

	//getters
	double getInvestmentAmt();
	double getDepositAmt();
	double getPercentAmt();
	int getNumYears();

	//setters
	void setInvestmentAmt(double initInvestment);
	void setDepositAmt(double monthlyDeposit);
	void setPercentAmt(double interestPercent);
	void setNumYears(int numYears);

private:
	double _initInvestment;
	double _monthlyDeposit;
	double _interestPercent;
	int _numYears;
};


#endif