#include <iostream>

using namespace std;

int main()
{
	int tests[10];

	for (int i = 0; i < 10; i++)
		cin >> tests[i];

	int x = 5;
	int y = 2;

	cout << tests[x + y] << endl;

	system("pause");

	return 0;


}