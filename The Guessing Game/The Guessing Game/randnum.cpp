#include <iostream>
using namespace std;

//Random Number Function
void randnum(int& rnum, int& num, int ctr)
{
	do
	{

		if (num == rnum)
		{
			cout << "You Guessed The Correct Number!!!!!!!:)" << endl;
			break;
			system("cls");
		}

		else if (num < rnum)
		{
			cout << "Your Number is too Low" << endl;

			if (ctr == 3)
			{
				cout << "You Have " << ctr - 1 << " Trys Left" << endl;
				cin >> num;
			}

			else if (ctr == 2)
			{
				cout << "You Have " << ctr - 1 << " Trys Left" << endl;
				cin >> num;
			}

			else if (ctr == 1)
			{
				cout << "I'm Sorry, You Have No Trys Left :(" << endl;
				cout << "Hidden Number was " << rnum << endl;
				cout << "Please Play Again!!!!!" << endl;
			}
		}

		else if (num > rnum)
		{
			cout << "Your Number is too High" << endl;

			if (ctr == 3)
			{
				cout << "You Have " << ctr - 1 << " Trys Left" << endl;
				cin >> num;
			}
			else if (ctr == 2)
			{
				cout << "You Have " << ctr - 1 << " Trys Left" << endl;
				cin >> num;
			}

			else if (ctr == 1)
			{
				cout << "I'm Sorry, You Have No Trys Left :(" << endl;
				cout << "Hidden Number was " << rnum << endl;
				cout << "Please Play Again!!!!!" << endl;
			}

		}

		ctr--;

	} while (ctr != 0);

}