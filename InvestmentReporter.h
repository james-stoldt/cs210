/*
* ---------------------
* SNHU CS-210 Module 5
* ---------------------
* Program: Compound Interest Calculator
* Developer: James Stoldt
* Modified: 4/7/24
*
* ~Investment Class Interface~
* Class header for report printing functions for Investment objects
*
*/

#ifndef REPORTER_CLASS
#define REPORTER_CLASS

#include "Investment.h"

class InvestmentReporter
{
public:
	InvestmentReporter(Investment& investment);
	void printWithoutDeposits();
	void printWithDeposits();
private:
	Investment _investment;
	double _investmentAmt;
	double _monthlyDeposit;
	double _percent;
	int _years;
};


#endif
