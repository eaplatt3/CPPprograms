//Earl Platt III
//Ch 5 - Car Cost Caculator
//BCS120
//4/7/2017

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	//Variable Declarations
	int year;
	string vin;
	string make;
	string model;
	int anmi;
	double insur;
	double maint;
	int avgmi;
	double gas;
	double totgas;
	double cost;
	int angal;
	string fname;
	ifstream infile;
	ofstream fileout;

	//Users Input
		cout << "Please Enter The Cost of Gas " << endl;
		cin >> gas;

	//Access File
	infile.open("CarList.txt");

	//Testing for File Location
	if (infile)
	{
	//Inport File Data
		infile >> year;
		infile >> vin;
		infile >> make;
		infile >> model;
		infile >> anmi;
		infile >> insur;
		infile >> maint;
		infile >> avgmi;

	//Heading
		cout << setw(10) << "Car Make " << setw(15) << "Car Model " << setw(11) << "Car Year " << setw(24) << "Annual Insurance Cost " << setw(19) << "Annual Gas Cost " << setw(12) << "Total Cost" << endl;
		cout << setw(9) << "--------" << setw(15) << "---------" << setw(11) << "--------" << setw(24) << "---------------------" << setw(19) << "---------------" << setw(13) << "----------" << endl;

	//Import Loop
		while (!infile.eof())
		{
			angal = anmi / avgmi;
			totgas = gas * angal;
			cost = totgas + insur + maint;

		//Data Display
			cout << " " << make << setw(10) << " " << model << setw(7) << " " 
				<< year << setw(8) << fixed << showpoint << setprecision(2) << '$' << " " << 
				insur << setw(17) << '$' << " " << totgas << setw(11) << '$' << " " << cost << endl;

			infile >> year;
			infile >> vin;
			infile >> make;
			infile >> model;
			infile >> anmi;
			infile >> insur;
			infile >> maint;
			infile >> avgmi;

			//break;

		}
		
		infile.close();

	//User Creates File
		cout << "Please Name Your File" << endl;
		cin >> fname;
		fileout.open(fname += ".txt");

		infile.open("CarList.txt");

		infile >> year;
		infile >> vin;
		infile >> make;
		infile >> model;
		infile >> anmi;
		infile >> insur;
		infile >> maint;
		infile >> avgmi;

		fileout << " VIN Number" << setw(15) << "Total Cost" << endl;
		fileout << " ----------" << setw(15) << "----------" << endl;

	//Data Writing Loop 
		while (!infile.eof())
		{
			angal = anmi / avgmi;
			totgas = gas * angal;
			cost = totgas + insur + maint;
			
			fileout << " " << vin << fixed << showpoint <<setprecision(2) << setw(5) << '$' << " " << cost << endl;
			infile >> year;
			infile >> vin;
			infile >> make;
			infile >> model;
			infile >> anmi;
			infile >> insur;
			infile >> maint;
			infile >> avgmi;
			
			//break;
			
		}

	//Close File
		infile.close();

		fileout.close();

	}

//If File is Not Found Exception
	else
		cout << "File Dosen't Exist" << endl;

	return 0;
}