#include <iostream>

using namespace std;

int main()
{
	int arr[] = {1,2,1,2,1,2,2,1};

	//for (int i = 0; i < 10; i++)
		//cout << arr[i] << endl;

	for (int i : arr)      //Range-based Array
		cout << i << endl;

	system("pause");

	return 0;

}