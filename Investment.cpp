/*
* ---------------------
* SNHU CS-210 Module 5
* ---------------------
* Program: Compound Interest Calculator
* Developer: James Stoldt
* Modified: 4/7/24
*
* ~Investment Class Implementation~
* Represents an investment based on an initial investment amount, additional monthly deposit amounts,
* interest rate, and number of years.
*
*/

#include "Investment.h"

//constructors
Investment::Investment()
{
	_initInvestment = 1;
	_monthlyDeposit = 1;
	_interestPercent = 1;
	_numYears = 1;
}

Investment::Investment(double initInvestment, double monthlyDeposit, double interestPercent, int numYears)
{
	_initInvestment = initInvestment;
	_monthlyDeposit = monthlyDeposit;
	_interestPercent = interestPercent;
	_numYears = numYears;
}

//getters
double Investment::getInvestmentAmt()
{
	return _initInvestment;
}

double Investment::getDepositAmt()
{
	return _monthlyDeposit;
}

double Investment::getPercentAmt()
{
	return _interestPercent;
}

int Investment::getNumYears()
{
	return _numYears;
}

//setters
void Investment::setInvestmentAmt(double initInvestment)
{
	_initInvestment = initInvestment;
}

void Investment::setDepositAmt(double monthlyDeposit)
{
	_monthlyDeposit = monthlyDeposit;
}

void Investment::setPercentAmt(double interestPercent)
{
	_interestPercent = interestPercent;
}

void Investment::setNumYears(int numYears)
{
	_numYears = numYears;
}