#include<iostream>

using namespace std;

int main()
{
	double metric_ton = 35273.92;
	double weight, weight_copy, result;

	cout << "Enter weight in ounces: ";
	cin >> weight;

	weight_copy = weight;
	
	weight = weight / metric_ton;
	cout << "Weight in Metric Tons: " << weight << "\n";

	result = metric_ton / weight_copy;
	cout << "Number of boxes required to equal a Metric Ton: " << result << "\n";

	return 0;
}