/*
* ---------------------
* SNHU CS-210 Module 5
* ---------------------
* Program: Compound Interest Calculator
* Developer: James Stoldt
* Modified: 4/7/24
*
* ~Investment Class Implementation~
* Class implementation for report printing functions for Investment objects
*
*/

#include "InvestmentReporter.h"
#include <iostream>
#include <iomanip>

using namespace std;

InvestmentReporter::InvestmentReporter(Investment& investment)
{
	_investment = investment;

	_investmentAmt = investment.getInvestmentAmt();
	_monthlyDeposit = investment.getDepositAmt();
	_percent = investment.getPercentAmt();
	_years = investment.getNumYears();
}

void InvestmentReporter::printWithoutDeposits()
{
	double currBal = _investmentAmt;

	cout << "Balance and Interest Without Additional Annual Deposits" << endl;
	cout << "=================================================================================" << endl;
	cout << "Year\tOpen Bal\tTotal\t\tInterest\tClose Bal" << endl;
	cout << "---------------------------------------------------------------------------------" << endl;

	cout << fixed << setprecision(2);
	for (int i = 1; i <= _years; i++)
	{
		double interest = currBal * _percent;
		double closingBal = currBal + interest;

		cout << i << "\t" << currBal << "\t\t" << currBal << "\t\t" << interest << 
			"\t\t" << closingBal << endl;

		currBal = closingBal;
	}

	cout << "---------------------------------------------------------------------------------" << endl << endl;
}


void InvestmentReporter::printWithDeposits()
{
	double currBal = _investmentAmt;
	double monthlyInterestRate = _percent / 12;

	cout << "Balance and Interest With Monthly Deposits" << endl;
	cout << "=================================================================================" << endl;
	cout << "Year\tOpen Bal\tDeposit\t\tTotal\t\tInterest\tClose Bal" << endl;
	cout << "---------------------------------------------------------------------------------" << endl;

	cout << fixed << setprecision(2);

	for (int month = 1; month <= _years * 12; month++)
	{
		double interest = (currBal + _monthlyDeposit) * monthlyInterestRate;
		double closingBal = currBal + _monthlyDeposit + interest;

		if (month % 12 == 0) { //only print the years
			cout << month / 12 << "\t" << currBal << "\t\t" << _monthlyDeposit << "\t\t"
				<< (currBal + _monthlyDeposit) << "\t\t" << interest << "\t\t" << closingBal << endl;
		}

		currBal = closingBal;
	}

	cout << "---------------------------------------------------------------------------------" << endl << endl;
}

//accidentally printed by month first, stupid - keeping these functions in case

/*void InvestmentReporter::PrintWithDeposits()
{
	double currBal = _investmentAmt;

	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "=================================================================" << endl;
	cout << "Mon #\tOpen Bal\tDeposit\tTotal\tInterest\tClose Bal" << endl;
	cout << "-----------------------------------------------------------------" << endl;

	for (int i = 1; i < _years; i++)
	{
		double interest = (currBal + _monthlyDeposit) * (_percent / 12.0);
		double closingBal = currBal + _monthlyDeposit + interest;

		cout << fixed << setprecision(2);
		cout << i << "\t" << currBal << "\t\t" << (currBal + _monthlyDeposit) << "\t\t" << interest << "\t\t" << closingBal << endl;

		currBal = closingBal;
	}

	cout << "-----------------------------------------------------------------" << endl << endl;
}*/

/*void InvestmentReporter::PrintWithoutDeposits()
{
	double currBal = _investmentAmt;

	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "=================================================================" << endl;
	cout << "Mon #\tOpen Bal\tTotal\tInterest\tClose Bal" << endl;
	cout << "-----------------------------------------------------------------" << endl;

	for (int i = 1; i < _years; i++)
	{
		double interest = currBal  * (_percent / 12.0);
		double closingBal = currBal + interest;

		cout << fixed << setprecision(2);
		cout << i << "\t" << currBal << "\t\t" << currBal << "\t\t" << interest << "\t\t" << closingBal << endl;

		currBal = closingBal;
	}

	cout << "-----------------------------------------------------------------" << endl << endl;
}*/