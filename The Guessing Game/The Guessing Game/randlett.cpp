#include <iostream>
using namespace std;

//Random Letter Function
void randlett(char& rlett, char& lett, int ctr)
{
	do
	{

		if (lett == rlett)
		{
			cout << "You Guessed The Correct Letter!!!!!!!:)" << endl;
			break;
			system("cls");
		}

		else if (lett < rlett)
		{
			cout << "Your Letter is too Low" << endl;

			if (ctr == 3)
			{
				cout << "You Have " << ctr - 1 << " Trys Left" << endl;
				cin >> lett;
				lett == toupper(lett);
			}
			else if (ctr == 2)
			{
				cout << "You Have " << ctr - 1 << " Trys Left" << endl;
				cin >> lett;
				lett == toupper(lett);
			}
			else if (ctr == 1)
			{
				cout << "I'm Sorry, You Have No Trys Left :(" << endl;
				cout << "Hidden Letter was " << rlett << endl;
				cout << "Please Play Again!!!!!" << endl;
			}
		}

		else if (lett > rlett)
		{
			cout << "Your Letter is too High" << endl;

			if (ctr == 3)
			{
				cout << "You Have " << ctr - 1 << " Trys Left" << endl;
				cin >> lett;
				lett = toupper(lett);
			}
			else if (ctr == 2)
			{
				cout << "You Have " << ctr - 1 << " Trys Left" << endl;
				cin >> lett;
				lett = toupper(lett);
			}

			else if (ctr == 1)
			{
				cout << "I'm Sorry, You Have No Trys Left :(" << endl;
				cout << "Hidden Letter was " << rlett << endl;
				cout << "Please Play Again!!!!!" << endl;
			}

		}

		ctr--;

	} while (ctr != 0);

}