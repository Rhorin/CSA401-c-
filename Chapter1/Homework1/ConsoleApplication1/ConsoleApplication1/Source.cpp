#include<iostream>
using namespace std;

int main()
{
	double distance;
	int time; // in seconds

	cout << "Enter a time in seconds: ";
	cin >> time;
	
	distance = .5 * 32 * (time * time);
	cout << "The object dropped: " << distance << " feet in: " << time << " seconds.\n";

	return 0;
}