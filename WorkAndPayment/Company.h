#pragma once
#include "Employee.h"
#include "Worker.h"
#include "ProductionWorker.h"

class Company
{
	char companyName[20];
	int workersCount;
	Worker* pWorkers[100];

public:
	Company();
	Company(char* _companyName);
	int Add(Worker* pworker);
	int Remove(char* _personalID);
	void Print();
	double TotalPayment();
	int Search(char* _personalID);
	void PrintWorker(char* pID);
	void Promote(char* pID);
	void PrintPosition(int index);
};

