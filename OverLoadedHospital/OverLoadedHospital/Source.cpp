//Earl Platt III
//4/27/2017
//Chapter 6 - Overloaded Hospital
//BCS 120

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
//Including the Functions
#include "validate.h"
#include "cost.h"

using namespace std;

int main()
{
	//Data Types Declared 
	double days = 0;
	double rate = 0;
	double serv = 0;
	double med = 0;
	double charges = 0;
	string choice;
	string fname = "Patient Bill";
	ofstream fileout;
	char yesNo;

	//Choice Menu Loop
	do
	{
		cout << setw(25) << "Penthurst State Hospital" << endl;
		cout << setw(25) << "------------------------" << endl;
		cout << setw(23) << "Patient Billing System" << endl;
		cout << setw(23) << "----------------------" << endl;
		cout << setw(57) << "Was The Patient admitted as an Inpatient or Outpatient? ";
		cin >> choice;
		
		//Inpatient or Outpatient Choice
		if (choice == "Inpatient" || choice == "inpatient" || choice == "Outpatient" || choice == "outpatient")
		{

			if (choice == "inpatient" || choice == "Inpatient")
			{
				cout << " Please Enter The Amount of Day(s) The Patient was in the Hospital: ";
				cin >> days;
				validate(days); //Checking if input valid

				cout << " Please Enter the Daily Rate per Day: $";
				cin >> rate;
				validate(rate);
				

				cout << " Please Enter the Hospital Service Charge: $";
				cin >> serv;
				validate(serv);

				cout << " Please Enter the Medication Cost: $";
				cin >> med;
				validate(med);

				cout << setprecision(2) << fixed << " The Total Cost Is: " << '$' << cost(days, rate, serv, med, charges) << endl;

				//Writing Inpatient Data To a file
				fileout.open(fname += ".txt");

				fileout << setw(25) << "Penthurst State Hospital" << endl;
				fileout << setw(25) << "------------------------" << endl;
				fileout << setw(15) << "Inpatient Bill" << endl;
				fileout << setw(15) << "--------------" << endl;
				if (days > 9)
				{
					fileout << " The Amount of Day(s) Spent" << "............................" << days << endl;
				}
				else
				fileout << " The Amount of Day(s) Spent" <<"............................ " << days << endl;
				fileout <<fixed << setprecision(2) << " The Daily Rate is" << "....................................." << '$' << rate << endl;
				fileout << fixed << setprecision(2) << " The Cost of the Hospital Service" << "......................" << '$' << serv << endl;
				fileout << fixed << setprecision(2) << " The Cost of the Medication" << "............................" << '$' << med << endl;
				fileout << " -------------------------------------------------------------" << endl;
				fileout << fixed << setprecision(2) << " The Total Due is"<<"......................................" << '$' << cost(days, rate, serv, med, charges) << endl;
			
				fileout.close();
			}


			else if (choice == "Outpatient" || choice == "outpatient")
			{
				cout << " Please Enter the Hospital Service Charge: $";
				cin >> serv;
				validate(serv);

				cout << " Please Enter the Medication Cost: $";
				cin >> med;
				validate(med);
				
				cout << setprecision(2) << fixed << " The Total Cost Is: " << '$' << cost( serv, med, charges) << endl;

				//Writing Outpatient Data to a file
				fileout.open(fname += ".txt");

				fileout << setw(25) << "Penthurst State Hospital" << endl;
				fileout << setw(25) << "------------------------" << endl;
				fileout << setw(16) << "Outpatient Bill" << endl;
				fileout << setw(16) << "---------------" << endl;
				fileout << fixed << setprecision(2) << " The Cost of the Hospital Service" << "......................" << '$' << serv << endl;
				fileout << fixed << setprecision(2) << " The Cost of the Medication" << "............................" << '$' << med << endl;
				fileout << " -------------------------------------------------------------" << endl;
				fileout << fixed << setprecision(2) << " The Total Due is" << "......................................" << '$' << cost(days, rate, serv, med, charges) << endl;

				fileout.close();

			}

			//Checking For Invaild Data
			else
			{
				cout << "Invalid Entry" << endl;
				cout << "Was The Patient admitted as an Inpatient or Outpatient" << endl;
				cin >> choice;
			}

		}
			cout << "Do You Have Another Patient You Would Like to Enter Yes(Y) or No(N)" << endl;
			cin >> yesNo;

			if (yesNo == 'N' || yesNo == 'n')
			{
				exit(0);
			}
			
			if (yesNo == 'Y' || yesNo == 'y')
			{
				system("cls");
			}

			else
			{
				cout << "Invalid Input" << endl;
				cout << " " << endl;
			}

		}while (yesNo != 'n' || yesNo != 'N');

	
	return 0;
}