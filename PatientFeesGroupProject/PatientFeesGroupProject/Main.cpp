#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string name;
	//Check-in Date Data Type
	//Check-out Date Data Type
	char choice;
	int surgery;
	int meds;

	cout << "Welcome to Smith Town General's Patient Portal" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "/n";

	cout << "Enter the Patients Name: ";
	cin >> name;
	while (cin.fail())
	{
		cout << "Invalid Input Please Re-enter The Patient's Name" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> surgery;
	}

	//setPatientsName

	cout << "Enter Check-in Date: ";
	//cin << ChkInDate;

	//setPatientsChkInDate

	cout << "What Type of Surgery is to be Preformed" << endl;
	cout << "1)'SurgeryType'" << endl;
	cout << "2)'SurgeryType'" << endl;
	cout << "3)'SurgeryType'" << endl;
	cout << "3)'SurgeryType'" << endl;
	cout << "4)'SurgeryType'" << endl;
	cin >> surgery;
	while (cin.fail())
	{
		cout << "Invalid Input Please Re-enter Your Choice" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> surgery;
	}

	//setSurgery

	cout << "What Medications will the Patient Take" << endl;
	cout << "1)'MedType'" << endl;
	cout << "2)'MedType'" << endl;
	cout << "3)'MedType'" << endl;
	cout << "4)'MedType'" << endl;
	cout << "5)'MedType'" << endl;
	cin >> meds;
	while (cin.fail())
	{
		cout << "Invalid Input Please Re-enter Your Choice" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> meds;
	}

	//setmeds

	do
	{

		cout << "Is There Anymore Medications Needed? ((y)yes or (n)no)" << endl;
		cin >> choice;

		if (choice == 'y' || choice == 'Y')
		{
			cout << "1)'MedType'" << endl;
			cout << "2)'MedType'" << endl;
			cout << "3)'MedType'" << endl;
			cout << "4)'MedType'" << endl;
			cout << "5)'MedType'" << endl;
			cin >> meds;
			while (cin.fail())
			{
				cout << "Invalid Input Please Re-enter Your Choice" << endl;
				cin.clear();
				cin.ignore(256, '\n');
				cin >> meds;
			}

			//setmeds
		}

		else;

	} while (choice != 'n' || choice != 'N');

	cout << "Please Enter Check-out Date: ";
	//cin >> ChkOutDate;

	//setPatintChkOutDate

	cout << " " << name << "Total Cost is " /*get patient cost*/ << endl;
	cout << "Day(s) spent: " << /*get days spent*/ "At a Rate of: " << '$' << /*Daily Rate*/ "is " << '$' << /*get Total dates pent cost*/ endl;
	cout << "Surgery Preformed: " << /*get Surgery*/ "Costing: " << '$' << /*get surgery price*/ endl;
	cout << "Medication Provided: " << endl;
	cout << /*get med*/ '$' << /*get med cost*/ endl;

	return 0;
}