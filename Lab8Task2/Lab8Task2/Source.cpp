
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

// Function prototype
void selectionSort(string[], int); //Array Must Be passed by referance
string upperCaseIt(const string); //const - To Prevent Changing Orignal Array
void displayNames(const string[], int);

int main() {
	const int SIZE = 20;
	// Set up the array of strings, in this case names
	string name[SIZE] =
	{ "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
		"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
		"Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
		"Moretti, Bella", "Wu, Hong",     "Patel, Renee",   "Harrison, Rose",
		"Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth" };

	// Call a function to sort the strings
	selectionSort(name, SIZE);
	// Call a function to display the (now sorted) strings
	cout << "The names in sorted order are: \n\n";
	displayNames(name, SIZE);

	return 0;
}

void selectionSort(string name[], int numStrings) {
	int startScan, minIndex;
	string minValue;
	{ 
		int outer, inner, min;
		for (outer = 0; outer < numStrings - 1; outer++) { 
			min = outer;        
		for (inner = outer + 1; inner < numStrings; inner++) { 
			if (name[inner] < name[min]) { 
				min = inner; 
			} 
		}        

		int temp = name[outer];        
		name[outer] = name[min];        
		name[min] = temp; 
		} 
	}

}

string upperCaseIt(const string stringIn) {
	string s = stringIn;     // Local copy of stringIn we'll uppercase
	for (unsigned pos = 0; pos < s.length(); pos++)
		s[pos] = 

	return s;
}

void displayNames(const string name[], int numNames) {
	//ToDo 3: Print all elements (numNames) of the string array (name)
}