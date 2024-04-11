#pragma once
#include <stdio.h>
#include <string.h>
#define EMPLOYEE 1
#define PRODUCTION_WOKRER 2

class Worker
{
protected:
	char name[20];
	char familyName[20];
	char personID[20];
	double workingYears;
	double payment;
	int position;
	virtual double PaymentCalc() { return 0; };

public:
	Worker();
	Worker(char* _name, char* _familyName, char* _personID, double _workingYears);
	virtual void Print();
	double getPayment() { return payment; };
	char* getPersonalID() { return personID; };
	Worker& operator=(Worker& d);
	char* getName();
	char* getFamilyName();
	double getWorkingYears();
	virtual void SetSalary(double _salary) = 0;
	int GetPosition();

};
