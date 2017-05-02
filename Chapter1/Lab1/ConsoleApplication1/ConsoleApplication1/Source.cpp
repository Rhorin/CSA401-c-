#include<iostream>
using namespace std;

int main()
{
	int time; // in seconds
	int minutes;
	int seconds;
	int hours;

	cout << "Enter a length of time in seconds: ";
	cin >> time;

	hours = time / 3600;
	minutes = (time % 3600) / 60;
	seconds = (time % 3600) % 60;

	cout << "Hours:" << hours << "\nMinutes:" << minutes << "\nSeconds:" << seconds << "\n";

	return 0;
}