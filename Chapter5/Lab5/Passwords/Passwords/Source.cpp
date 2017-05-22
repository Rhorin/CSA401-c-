#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int actual [] = {3, 1, 3, 3, 7};
	int passwordMap [10];
	int enteredPassword [5];

	// Seed random number generator
	srand(time(NULL));

	// Generate random numbers for each digit
	for (int i = 0; i < 10; i++)
	{
		passwordMap[i] = (rand() % 3) + 1;
	}
	// output the password mapping
	cout << "enter the digits that correspond to your secret password map" << endl;
	cout << "0 1 2 3 4 5 6 7 8 9" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << passwordMap[i] << " ";
	}
	cout << endl;

	// read input from user
	int num;
	cin >> num;
	// extract each digit and put it into enterdPassword[]
	enteredPassword[4] = num % 10;
	enteredPassword[3] = (num / 10) % 10;
	enteredPassword[2] = (num / 100) % 10;
	enteredPassword[1] = (num / 1000) % 10;
	enteredPassword[0] = (num / 10000);

	// output success if all digits match
	bool mismatch = false;
	for (int i = 0; i < 5; i++)
	{
		if (enteredPassword[i] != passwordMap[actual[i]])
			mismatch = true;
	}
	if (mismatch == false)
	{
		cout << "Successful authentication" << endl;
	}
	else
	{
		cout << "Invalid password" << endl;
	}
}