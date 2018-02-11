#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n;
	int tot = 0;
	bool baddata;
	//Declare File Variable
	ifstream infile;
	//Link Variable with Actual File
	infile.open("numbers.txt");

	infile >> n;

	while (!infile.eof())
	{
		if (n < 0)
		{
			
			baddata = true;
			break;    //Ends Loop if True
		}

		tot += n;
		infile >> n;
	}

	if (baddata)
		cout << "there was neg numbers in data" << endl;
	cout << tot << endl;

	else
	
		cout << "the total sum of the number in the file (excluding neg Numbers) is " << tot << endl;

	//Close The File
	infile.close();

	return 0;
}