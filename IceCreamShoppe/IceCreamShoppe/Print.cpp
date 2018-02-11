#include <iostream>
#include <iomanip>

using namespace std;

void Print(int A, int B, int C, double D, int E, double F, int G, double H) {

	cout << "///////// Inventory /////////" << endl;
	cout << "Vanilla Icecream Sold: " << A << endl;
	cout << "Chocolate Icecream Sold: " << B << endl;
	cout << "Small Cone(s) Sold: " << C << endl;
	cout << fixed << showpoint << setprecision(2) << "Small Cone(s) Cost: " << '$' << D << endl;
	cout << "Medium Cone(s) Sold: " << E << endl;
	cout << fixed << showpoint << setprecision(2) << "Medium Cone(s) Cost: " << '$' << F << endl;
	cout << "Large Cone(s) Sold: " << G << endl;
	cout << fixed << showpoint << setprecision(2) << "Large Cone(s) Cost: " << '$' << H << endl;

}