#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n;
	int tot = 0;
	//Declare File Variable
	ifstream infile;        
	//Link Variable with Actual File
	infile.open("numbers.txt");
	
	infile >> n;

	while (!infile.eof())
	{
		if (n < 0)
		{
			//Read Next File
			infile >> n;
			continue;    //Skips Rest of Loop if True
		}

		tot += n;
		infile >> n; 
	}

	cout << "the total sum of the number in the file (excluding neg Numbers) is " << tot << endl;

	//Close The File
	infile.close(); 

	return 0;
}