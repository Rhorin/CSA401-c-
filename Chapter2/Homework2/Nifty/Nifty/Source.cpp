#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string strNum;
	fstream inputStream;
	int digits [9] = {0, 0, 0, 0, 0, 0, 0, 0};

	inputStream.open("NiftyTest.txt");

	for(int i = 0; i <= 100; i++)
	{
		inputStream >> strNum;
		if(strNum[0] == '1')
			digits[0]++;
		else if(strNum[0] == '2')
			digits[1]++;
		else if(strNum[0] == '3')
			digits[2]++;
		else if(strNum[0] == '4')
			digits[3]++;
		else if(strNum[0] == '5')
			digits[4]++;
		else if(strNum[0] == '6')
			digits[5]++;
		else if(strNum[0] == '7')
			digits[6]++;
		else if(strNum[0] == '8')
			digits[7]++;
		else if(strNum[0] == '9')
			digits[8]++;
		else
		{
			cout << "Something went wrong";
		}
	}

	cout << "Number of occurences:\n" << "1: " << digits[0] << "\n2: " << digits[1] << "\n3: " << digits[2] 
		 << "\n4: " << digits[3] << "\n5: " << digits[4] << "\n6: " << digits[5] << "\n7: " << digits[6] 
		 << "\n8: " << digits[7] << "\n9: " << digits[8] << endl;

	cout << "Percentage of times occured:\n";

	for (int j = 0; j <= 8; j++)
		cout << j+1 << ": " << (double)digits[j] << "%\n";
	
}