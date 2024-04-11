#pragma once
#include "Worker.h"

class Employee : public Worker
{
	double fullTimeSalary;
	double workClass;
	double PaymentCalc();

public:
	Employee();
	Employee(char* _name, char* _familyName, char* _personID, double _workingYears, double _fullTimeSalary);
	void Print();
	char* getName();
	char* getFamilyName();
	char* getPersonalID();
	double getWorkingYears();
	void SetSalary(double _salary);
	void Promote();
	void operator=(Worker& p);

};

