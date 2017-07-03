#include <iostream>
#include "SuitorNode.h"
using namespace std;

int main()
{
	int numSuitors;
	SuitorNode *current = NULL;
	SuitorNode *tail = NULL;
	SuitorNode *prev = NULL;
	
	cout << "Enter the number of suitors " << endl;
	cin >> numSuitors;

	if (numSuitors <= 0)
	{
		cout << "Not enough suitors" << endl;
	}
	else if (numSuitors == 1)
	{
		cout << "You would stand first in line." << endl;
	}
	else
	{
		// linked list
		current = new SuitorNode(1);
		current->setNext(current); //circular
		tail = current;			   // "end"

		for (int i = 2; i <= numSuitors; i++)
		{
			SuitorNode *temp = new SuitorNode(i);
			temp->setNext(tail->getNext());
			tail->setNext(temp);
			tail = temp;
		}

		// Eliminate a suitor from the list
		// as long as there is at least one left
		while (current->getNext() != current)
		{
			// count three people ahead
			// by trarversing 2 links
			for (int i = 0; i < 2; i++)
			{
				prev = current;
				current = current->getNext();
			}
			// delete the node
			prev->setNext(current->getNext());
			delete current;
			current = prev->getNext();
		}

		cout << "To marry the princess you should stand in position " << 
			current->getNum() << endl;
		delete current;

	}
	cout << "enter a character to exit." << endl;
	char wait;
	cin >> wait;
	return 0;
}