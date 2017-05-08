#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);
int rollDice();

int main()
{
	int humanTotalScore = 0;
	int computerTotalScore = 0;
	srand(time(NULL));

	while ((humanTotalScore < 100) && (computerTotalScore < 100))
	{
		humanTurn(humanTotalScore);
		computerTurn(computerTotalScore);
		
	}
	if (humanTotalScore >= 100)
		cout << "You win!\n";
	else if (computerTotalScore >= 100)
		cout << "The computer wins.\n";

	return 0;
}

int humanTurn(int humanTotalScore)
{
	int score = 0;
	int lastRoll;
	char holdOrRoll;

	cout << "Player's turn.\n";
	cout << "Your current score is: " << humanTotalScore << ".\n";
	cout << "Press 'r' to roll or 'h' to hold.\n";
	cin >> holdOrRoll;

	while (holdOrRoll == 'r')
	{
		lastRoll = rollDice();

		if (lastRoll != 1)
		{
			score += lastRoll;
			cout << "You rolled a " << lastRoll << ". Press 'r' to roll or 'h' to hold.\n";
			cin >> holdOrRoll;
		}
		else
		{
			cout << "You rolled a 1, your turn is over.\n";
			break;
		}
	}
	while (holdOrRoll == 'h')
	{
		humanTotalScore += score;
		cout << "current score: " << humanTotalScore << endl;
		break;
	}
	
	return 0;
}

int computerTurn(int computerTotalScore)
{
	int score = 0;
    int lastRoll;

	cout << "Computer's turn.\n";
    cout << "Computer's total score is: " << computerTotalScore << ".\n";
    while ((score <= 20) && (score != 1))
    {
        lastRoll = rollDice();
        if (lastRoll == 1)
        {
            cout << "The computer rolled a 1, ending their turn." << endl;
            break;
        }
        else
        {
            score += lastRoll;
            cout << "The computer rolls a " << lastRoll << ". Computer's score this turn is: " << score << endl;
        }
    }
    if(score >= 20)
    {
        computerTotalScore += score;
        cout << "After the computer's turn, they have gained an additional " << score << " points.\n";
    }
   
    return 0;
}

int rollDice()
{
	int dice;

	dice = (rand() % 6) + 1;

	return dice;
}