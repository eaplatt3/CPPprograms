#include <iostream>
#include <string>

using namespace std;

int main()
{
	string InDate;
	string FirstName;
	string LastName;
	string MiddleName;
	string DOB;
	string OutDate;
	string surgery;
	string meds;
	string choice;
	int Nights;
	
	cout << "Welcome to Farside Hospital Paient Portal" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Please Enter Todays Date" << endl;
	cin >> InDate;
	cout << "n/";

	//call paient accounts
	//set paient accounts

	cout << "Please Enter Paient's First Name" << endl;
	cin >> FirstName;
	cout << "n/";

	//call paient accounts
	//set paient accounts

	cout << "Please Enter Paient's Middle Name" << endl;
	cin >> MiddleName;
	cout << "n/";

	//call paient accounts
	//set paient accounts

	cout << "Please Enter Paient's Last Name" << endl;
	cin >> LastName;
	cout << "n/";

	//call paient accounts
	//set paient accounts

	cout << "Please Enter Paient's Date of Birth" << endl;
	cin >> DOB;
	cout << "n/";

	//call paient accounts
	//set paient accounts

	cout << "Please Enter the Type of Surgey Paient will be receving" << endl;
	cin >> surgery;
	cout << "n/";

	//call surgery class
	//set surgery class

	cout << "Please Enter the Type of Medication the Paient will be needing" << endl;
	cin >> meds;
	cout << "n/";

	//call med class
	//set med class

	cout << "Is There Any Other Medication the Paient Will be Needing (Yes or No)" << endl;
	cin >> choice;

	cout << "\n";
	
	if (choice == "Yes" || choice == "yes")
	{
		cout << "What is the Additional Medications" << endl;
		cin >> meds;
		cout << "\n";
	}

	else

		system("pause");
		system("cls");
	
		cout << "Please Enter Check-out Date" << endl;
		cin >> OutDate;
		cout << " " << endl;

		//call paient accounts
		//set paient accounts

		cout << "Please Enter Nights Spent" << endl;
		cin >> Nights;
		cout << "n/";

		//Call Pacient accounts
		//Set Pacient Accounts

		cout << "Farside Hospital Bill Summary" << endl;
		cout << "-----------------------------" << endl;

		cout << "Paient Name: " << /*get paient name*/ " " << DOB << endl;
		cout << "Check-In Date: " << InDate << endl;
		cout << "Type of Surgery Preformed & Cost: " << /*get Surgery*/ " " << /*surgery cost*/ endl;
		cout << "Type of Medication(s) Given & Cost: " << /*get Meds*/ " " << /*get meds cost*/ endl;
		cout << "Check-Out Date: " << OutDate << endl;
		cout << "Total Visit Cost: " << /*get Total cost*/ endl;

		system("pause");

		return 0;
}