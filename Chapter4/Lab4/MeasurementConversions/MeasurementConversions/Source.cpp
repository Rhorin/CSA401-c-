#include<iostream>
#include<cstdlib>

using namespace std;

void getEnglishUnits(int &feet, int &inches);
void calcMetric(int feet, int inches, double &meters, double &centimeters);
void outputMetric(double meters, double centimeters);

int main()
{
	int feet, inches;
	double meters, centimeters;

	cout << "Enter -1 to close the program" << endl;

	do
	{
		getEnglishUnits(feet, inches);
		calcMetric(feet, inches, meters, centimeters);
		outputMetric(meters, centimeters);
	}
	while((feet != -1) && (inches != -1));

	return 0;
}

void getEnglishUnits(int &feet, int &inches)
{
	cout << "Enter feet: " << endl;
	cin >> feet;
	cout << "Enter inches: " << endl;
	cin >> inches;
}

void calcMetric(int feet, int inches, double &meters, double &centimeters)
{
	double totalFeet = feet + (inches / 12.0);
	meters = totalFeet * 0.3048;
	centimeters = meters * 100;
}

void outputMetric(double meters, double centimeters)
{
	cout << "The length in meters is " << meters << " which is also " <<
		centimeters << " centimeters." << endl;
}