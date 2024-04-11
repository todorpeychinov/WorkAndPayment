

#include "Company.h"
#include <iostream>


int main()
{
    int help = 1;

    Company cmp;

    while (help)
    {   
        std::cout << "        MENU:      " << std::endl;
        std::cout << "1.Press 1 to add worker." << std::endl;
        std::cout << "2.Press 2 to fire worker." << std::endl;
        std::cout << "3.Press 3 to print information for worker." << std::endl;
        std::cout << "4.Press 4 to raise worker." << std::endl;
        std::cout << "5.Press 5 to view list of all workers from certain position." << std::endl;
        std::cout << "6.Press 0 to exit from the menu." << std::endl;
		std::cin >> help;

        switch (help)
        {
        case 1:
            std::cout << "1.For employee press 1.\n2.For Production Worker press 2.\n";
			std::cin >> help;
            char name[20];
            char familyName[20];
            char personalID[20];
            int workingYears;
            if (help == 1)
            {
               
                double fullTimeSalary;
                std::cout << "Enter the employee first name: ";
				std::cin >> name;
                std::cout << "Enter the employee last name: ";
				std::cin >> familyName;
                std::cout << "Enter the employee personal ID: ";
				std::cin >> personalID;
                std::cout << "Enter the employee working years: ";
				std::cin >> workingYears;
                std::cout << "Enter the employee full time salary: ";
				std::cin >> fullTimeSalary;
                cmp.Add(new Employee(name, familyName, personalID, workingYears, fullTimeSalary));

            }

            else if (help == 2)
            {
                int workingDays;
                double paymentPerDay;
                std::cout << "Enter the production worker first name: ";
                std::cin >> name;
                std::cout << "Enter the production worker last name: ";
                std::cin >> familyName;
                std::cout << "Enter the production worker personal ID: ";
                std::cin >> personalID;
                std::cout << "Enter the production worker years: ";
                std::cin >> workingYears;
                std::cout << "Enter the production worker working days: ";
                std::cin >> workingDays;
                std::cout << "Enter the production worker payment per day: ";
                std::cin >> paymentPerDay;

                cmp.Add(new ProductionWorker(name, familyName ,personalID, workingYears, workingDays, paymentPerDay));
                
            }
            break;
        
        case 2:
            char personalID_2[20];
            std::cout << "Enter worker personal ID: ";
            std::cin >> personalID_2;
            cmp.Remove(personalID_2);
            break;
          
        case 3:
            char personalID_3[20];
            std::cout << "Enter worker personal ID: ";
            std::cin >> personalID_3;
            cmp.PrintWorker(personalID_3);
            break;

        case 4:
            char pID[20];
            double salary; 
            std::cout << "Enter personal ID of the person, who want to promote: ";
            std::cin >> pID;
            cmp.Promote(pID);
            break;
        case 5:
            int position;
            std::cout << "Enter the position of workers that you want to view:\nEnter 1 for Employee or 2 for Production worker.";
            scanf_s("%d", &position);
            cmp.PrintPosition(position);
            break;

        }
	}
	cmp.Print();
    
}

