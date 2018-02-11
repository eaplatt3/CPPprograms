#include <iostream>
using namespace std;
void validate(float& x);

int main()
{
	float value;

	cout << "enter an Value" << endl;
	cin >> value;
	while (value < 0)
	{
		validate(value);
	}

	cout << "Postitive Value Entered" << endl;


	return 0;





}

void validate(float& x)
{
	while (x < 0)
	{
		cout << " Enter a postive Value" << endl;
		cin >> x;



	}


}