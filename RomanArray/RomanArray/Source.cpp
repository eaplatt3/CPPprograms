#include <iostream>
#include <string>

using namespace std;

int main()
{

	int num = 0;

	string RomanI[] = { " ", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
	string RomanX[] = { " ", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "LC"};
	string RomanC[] = { " ", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	string RomanM[] = { " ", "M", "MM", "MMM", "MMMM", "MMMMM"};

	cout << "Please Enter A Number?" << endl;
	cin >> num;

	if (num > 5000)
	{
		cout << "Invalid Entry" << endl;
		cout << "Please Enter a Number Less Then 5000" << endl;
		cin >> num;
	}

	if (num <= 5000)
		RomanM[num / 1000];
		
	if(num < 1000)
		RomanC[num / 100];

	if (num < 100)
		RomanX[num / 10];

	if(num < 10)
		RomanI[num / 10];

	cout << num << "Is " << RomanM[num] << RomanC[num] << RomanX[num] << RomanI[num] << "In Roman Numerals" << endl;

	system("pause");

	return 0;

}