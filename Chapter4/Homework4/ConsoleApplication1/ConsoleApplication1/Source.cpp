#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
	int a = 3, b = 2, c = 5;
	if (a > b)
		a = 4;
		if ( b > c)
			a = 5;
	else
		a = 6;
	cout << a << endl;

	return 0;

}