#include <iostream>
#include <string>
using namespace std;

// anything in the unnamed namespace 
// has scope to the local file
namespace
{
	string username;
	bool isValid()
	{
		if (username.length() == 8)
			return true;
		return false;
	}
}

namespace Authenticate
{
	void inputUserName()
	{
		do
		{
			cout << "Enter your username (8 letters only)" << endl;
			cin >> username;
		} while (!isValid());
	}

	string getUserName()
	{
		return username;
	}
}