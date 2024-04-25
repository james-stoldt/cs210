/*
* ---------------------
* SNHU CS-210 Module 5
* ---------------------
* Program: Compound Interest Calculator
* Developer: James Stoldt
* Modified: 4/7/24
*
* Calculate the balance of an account over x amount of years based on compounded monthly interest
*
*/

#include "Investment.h"
#include "InvestmentReporter.h"
#include <iostream>

using namespace std;

int main()
{
	double initInvestment = 0.00;
	double monthlyDeposit = 0.00;
	double percent = 0.00;
	int numYears = 0;

	cout << "Initial investment amount: ";
	cin >> initInvestment;

	cout << "Monthly deposit amount: ";
	cin >> monthlyDeposit;

	cout << "Interest rate (decimal percentage): ";
	cin >> percent;

	cout << "Number of years: ";
	cin >> numYears;

	Investment investment(initInvestment, monthlyDeposit, percent, numYears);
	InvestmentReporter reporter(investment);

	reporter.printWithoutDeposits();
	reporter.printWithDeposits();
}