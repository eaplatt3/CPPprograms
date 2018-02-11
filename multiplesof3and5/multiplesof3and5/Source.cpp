#include <iostream>
using namespace std;

int main()
{
	
	int num = 1000; 
	int sum = 0;
	int i = 0;
	do
	{
		
		if (i % 3 == 0 || i % 5 == 0)
		{
			cout << i << endl;
			sum += i;
		}
		i++;
	} while (i < num);
	cout << sum << endl;



return 0;

}