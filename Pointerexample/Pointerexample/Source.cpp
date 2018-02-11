#include <iostream>
using namespace std;
int main()
{
	char arr[10];
	//int arr[10];
	cout << sizeof(arr) << endl;
	int sum = 65539;
	char* sumPtr = arr;
	//int* sumPtr = arr;
	cout << sizeof(sumPtr) << endl;

	cout << arr[3] << endl;
	cout << sumPtr[3] << endl;

	return 0;
}