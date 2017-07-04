#include <iostream>
#include "Node.h"
using namespace std;

int main()
{
	Node *A = new Node('A');
	Node *B = new Node('B');
	Node *C = new Node('C');
	Node *D = new Node('D');
	Node *E = new Node('E');
	Node *F = new Node('F');
	Node *G = new Node('G');
	Node *H = new Node('H');
	Node *I = new Node('I');
	Node *J = new Node('J');
	Node *K = new Node('K');
	Node *L = new Node('L');

	A->setConnections(NULL, E, B, NULL);
	B->setConnections(NULL, F, NULL, A);
	C->setConnections(NULL, G, D, NULL);
	D->setConnections(NULL, NULL, NULL, C);
	E->setConnections(A, I, NULL, NULL);
	F->setConnections(B, NULL, G, NULL);
	G->setConnections(C, K, H, F);
	H->setConnections(NULL, L, NULL, G);
	I->setConnections(E, NULL, J, NULL);
	J->setConnections(NULL, NULL, NULL, I);
	K->setConnections(G, NULL, NULL, NULL);
	L->setConnections(H, NULL, NULL, NULL);

	Node *current = A;

	while (current != L)
	{
		cout << "You are in room " << current->getID()
			 << " of a maze of twisty passages."
			 << " You can go: " << endl;
		if (current->getNorth() != NULL) cout << " NORTH" << endl;
		if (current->getSouth() != NULL) cout << " SOUTH" << endl;
		if (current->getEast() != NULL) cout << " EAST" << endl;
		if (current->getWest() != NULL) cout << " WEST" << endl;
		char direction;
		cin >> direction;
		if ((direction == 'N') && (current->getNorth() != NULL))
			current = current->getNorth();
		if ((direction == 'S') && (current->getSouth() != NULL))
			current = current->getSouth();
		if ((direction == 'E') && (current->getEast() != NULL))
			current = current->getEast();
		if ((direction == 'W') && (current->getWest() != NULL))
			current = current->getWest();
	}
	cout << "WOOT WOOT you are a winner!" << endl;

	cout << "Enter a character to exit." << endl;
	char wait;
	cin >> wait;
	return 0;
}