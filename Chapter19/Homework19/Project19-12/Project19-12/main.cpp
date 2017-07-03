#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string name;
	fstream inputStream;
	set<string> setNames;

	inputStream.open("names.txt");
	while (getline(inputStream, name))
	{
		setNames.insert(name);
	}
	inputStream.close();

	// loop and output names
	set<string>::const_iterator p;
	for (p = setNames.begin(); p != setNames.end(); p++)
	{
		cout << *p << endl;
	}

	system("PAUSE");
	return 0;
}