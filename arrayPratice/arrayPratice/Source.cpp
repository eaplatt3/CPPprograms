#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 9;
	int x = 9;

	//2-D Array            //2 = 1st row 1st Column 3 = 1st row 2nd Column  
	int arrr[SIZE][SIZE] = { {2,3}, {2,4} };

	int arr[SIZE];
	//Declaring Elements 
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };  

	//Range Based For Loop = for ("DataType" "Var":"ArrayName")
	//for (int itm : arr)
		//cout << itm << "\t";

	//2-D Array Inetlize 
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 2; col++)
			cout << arrr[row][col] << "\t";
		cout << endl;
	}


	for (int i = 0; i < SIZE; i++)
		arr[i] = i;

	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << "\t";

	system("pause");

	return 0;
}