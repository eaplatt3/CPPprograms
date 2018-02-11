//Chapter 4 Ques. 9
//Software Sales	
//Earl Platt III
//BCS 120
//3/30/17

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double qty;                 //Declare Variables
	double pkg = 199;
	double pkgdis;
	double newprice;
	double cost;


	cout << "Please Enter the Quantity you would like to Purchase:" << endl;  //Prompt User To Enter Data
	cin >> qty;


	if ((qty <= 9) && (qty >= 1))                                            //Test User Data To Determine Cost Of Purchase
	{
		cost = qty * pkg;                                 //Total

		cout << "Your Total is: " << fixed << setprecision(2) << showpoint << '$' << cost << " @ " << '$' << pkg << " Per Package." << endl;
	}

	else if ((qty >= 10) && (qty <= 19))
	{
		pkgdis = 0.2 * pkg;                            //20% Discount Arithmetic & Total
		cost = (pkg - pkgdis) * qty;
		newprice = pkg - pkgdis;

		cout << "Your Total is: " << fixed << setprecision(2) << showpoint << '$' << cost << " @ " << '$' << newprice << " Per Package." << endl;
	}

	else if ((qty >= 20) && (qty <= 49))
	{
		pkgdis = 0.3 * pkg;                         //30% Discount Arithmetic & Total
		cost = (pkg - pkgdis) * qty;
		newprice = pkg - pkgdis;

		cout << "Your Total is: " << fixed << setprecision(2) << showpoint << '$' << cost << " @ " << '$' << newprice << " Per Package." << endl;
	}

	else if ((qty >= 50) && (qty <= 99))
	{
		pkgdis = 0.4 * pkg;                       //40% Discount Arithmetic & Total
		cost = (pkg - pkgdis) * qty;
		newprice = pkg - pkgdis;

		cout << "Your Total is: " << fixed << setprecision(2) << showpoint << '$' << cost << " @ " << '$' << newprice << " Per Package." << endl;
	}

	else if (qty >= 100)
	{
		pkgdis = 0.5 * pkg;                     //50% Discount Arithmectic & Total
		cost = (pkg - pkgdis) * qty;
		newprice = pkg - pkgdis;

		cout << "Your Total is: " << fixed << setprecision(2) << showpoint << '$' << cost << " @ " << '$' << newprice << " Per Package." << endl;
	}

	else                                                                 //Check For Valid Entry 
		cout << "Invalid Entry Please Re-Enter Amount..." << endl;


	return 0;
}