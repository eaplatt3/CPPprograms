#include <iostream>
using namespace std;

bool searchList(long[], int, long); // Function prototype

const int SIZE = 18;
int main()
{
	long accounts[SIZE] =
	{ 5658845,  4520125,  7895122,  8777541,
		8451277,  1302850,8080152,  4562555,
		5552012,  5050552,  7825877,  1250255,
		1005231,  6545231,  3852085,  7576651,
		7881200,  4581002, };
	long acctNum;

	cout << "Please enter a 7-digit account number: ";
	
	cin >> acctNum;
	
	if (searchList(accounts, SIZE, acctNum)) 
			cout << "found" << endl;
	else
		cout << "not found" << endl;

	system("pause");

	return 0;
}

//Linear Search
bool searchList(long list[], int numElems, long value)
{
	for(int i = 0; i <numElems; i++)
	{
		if (list[i] == value)
			return true;
	}

	return false;

}