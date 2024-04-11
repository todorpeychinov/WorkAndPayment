#include "Company.h"


void Company::Promote(char* pID) {
	Worker **p=&pWorkers[Search(pID)];
	double salary = (*p)->getPayment();
	Worker* help = new Employee();
	*help = **p;
	delete *p;
	help->SetSalary(salary * 1.2);
	*p = help;
}

Company::Company()
{
	companyName[0] = '\0';
	workersCount = 0;
}

Company::Company(char* _companyName)
{
	strcpy_s(companyName, _companyName);
	workersCount = 0;
}

int Company::Add(Worker* pworker)
{
	if (workersCount >= 100)
		return 0;
	pWorkers[workersCount] = pworker;
	workersCount++;
	return 1;
}

int Company::Remove(char* _personalID)
{
	if (workersCount == 0)
		return 0;
	int index = Search(_personalID);
	if (index == -1)
	{
		printf("There is no such a worker!");
			return 0;
	}
	
	for (; index < workersCount - 1; index++)
	{
		pWorkers[index] = pWorkers[index + 1];
	}

	delete pWorkers[workersCount - 1];
	pWorkers[workersCount - 1] = NULL;
	workersCount--;
	return 1;
}

int Company::Search(char* _personalID)
{
	int min = 0;
	int max = workersCount;
	int mid = 0;

	while (max >= min)
	{
		mid = (max + min) / 2;

		if (strcmp(_personalID, pWorkers[mid]->getPersonalID()) < 0)
		{
			max = mid - 1;
			mid = (min + max) / 2;

		}


		else if (strcmp(_personalID, pWorkers[mid]->getPersonalID()) > 0)
		{
			min = mid + 1;
			mid = (min + max) / 2;
		}

		else if (strcmp(_personalID, pWorkers[mid]->getPersonalID()) == 0)
			return mid;

	}
	return mid + 100;

}

double Company::TotalPayment()
{
	double total = 0;

	for (int i = 0; i < workersCount; i++)
	{
		total += pWorkers[i]->getPayment();
	}

	return total;

}

void Company::Print()
{
	for (int i = 0; i < workersCount; i++)
	{
		pWorkers[i]->Print();
		printf("\n");
	}
}

void Company::PrintWorker(char* pID)
{
	int index = Search(pID);
	if (index == -1)
		return;
	pWorkers[index]->Print();
}

void Company::PrintPosition(int index)
{
	for (int i = 0; i < workersCount; i++)
	{
		if (pWorkers[i]->GetPosition() == index)
			pWorkers[i]->Print();
	}
}



