#include <iostream>
#include <ctime>
#include <map>
using namespace std;

int main()
{
	int trial;
	int people;
	int numMatches;
	int i;
	map<int, int> birthdays;

	srand(static_cast<int>(time(NULL)));

	for (people = 2; people <= 50; people++)
	{
		numMatches = 0;
		for (trial = 0; trial < 5000; trial++)
		{
			birthdays.clear();
			// randomly generate birthdays
			for (i = 0; i < people; i++)
			{
				int birthday = (rand() % 365);
				if (birthdays.find(birthday) == birthdays.end())
				{
					birthdays[birthday] = 1;
				}
				else
				{
					numMatches++;
					break;
				}
			}
		}
		cout << " For " << people << " people, the probability of two birthdays is about " << (numMatches / 5000.0) << endl;
	}

	cout << "Enter a character to exit." << endl;
	char wait;
	cin >> wait;
	return 0;
}