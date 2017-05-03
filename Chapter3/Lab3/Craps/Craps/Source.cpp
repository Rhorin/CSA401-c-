#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int rolldice()
{
	int die1, die2;
	die1 = (rand() % 6) +1;
	die2 = (rand() % 6) +1;
	return die1 + die2;
}

int main()
{
	int comeOutRoll;
	int roll;
	int thePoint;
	int i;
	int numWins = 0;

	srand(time(NULL));

	for (i = 0; i < 10000; i++)
	{

		comeOutRoll = rolldice();
		cout << "You rolled " << comeOutRoll << endl;

		switch (comeOutRoll)
		{
			case 7:
			case 11:
				cout << "You win!" << endl;
				numWins++;
				break;
			case 2:
			case 3:
			case 12:
				cout << "You lose!" << endl;
				break;
			default:
				thePoint = comeOutRoll;
				cout << "The point is " << thePoint << endl;
				do
				{
					roll = rolldice();
					cout << " You Rolled " << roll << endl;
				}
				while ((roll != 7) && (roll != thePoint));
				if (roll == 7)
					cout << "You lose!" << endl;
				else
				{
					cout << "You win!" << endl;
					numWins++;
				}
		}
	}
	cout << "You won: " << numWins << " times.\n" << "Win: " << (double)numWins / 100 << "%\n";

	return 0;
}