#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	while (true)
	{
		int randNum{ rand() % 1000 + 1 };

		system("cls");
		cout << "I have a number between 1 and 1000."
			<< "\nCan you guess my number?"
			<< "\nPlease type your first guess.\n";

		unsigned int playerNum;
		char input;
		while (true)
		{
			cin >> playerNum;

			if (playerNum == randNum)
			{
				cout << "Excellent! You guessed the number!"
					<< "\nWould you like to play again (y or n)?\n";
				cin >> input;
				break;
			}
			else if (playerNum < randNum)
			{
				cout << "Too low. Try again.\n";
				continue;
			}
			else
			{
				cout << "Too high. Try again.\n";
				continue;
			}
		}

		if (input == 'y')
		{
			continue;
		}
		else if (input == 'n')
		{
			break;
		}
	}

	return 0;
}