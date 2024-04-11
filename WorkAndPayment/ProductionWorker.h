#pragma once
#include "Worker.h"
#include "Employee.h"
class ProductionWorker : public Worker
{
	int workingDays;
	double paymentPerDay;
	double PaymentCalc();

public:
	ProductionWorker();
	ProductionWorker(char* _name, char* _familyName, char* _personID, double _workingYears, int _workingDays, double paymentPerDay);
	void Print();
	void SetSalary(double salary) {}
};

