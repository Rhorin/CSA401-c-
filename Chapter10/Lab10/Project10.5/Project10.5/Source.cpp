#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector<int> grades; // raw grades
	int max = -1;
	int num;

	cout << "Enter grades, -1 to quit.\n";
	do
	{
		cin >> num;
		if (num != -1)
		{
			grades.push_back(num);
			if (num > max)
			{
				 max = num; // max holds value of largest number
			}
		}
	} while(num != -1);

	int *histogram = new int[max+1];

	for (int i = 0; i <= max; i++)
		histogram[i] = 0;

	// compute the histogram
	for (int i = 0; i < grades.size(); i++)
	{
		int grade = grades[i];
		histogram[grade]++;
	}

	// output the histogram to screen
	cout << endl << "HISTOGRAM\n";
	for (int i = 0; i <= max; i++)
	{
		cout << i << " : " << histogram[i] << endl;
	}

	delete[] histogram; 

	cout << "Enter a character to exit.\n";
	char wait;
	cin >> wait;
	return 0;
}