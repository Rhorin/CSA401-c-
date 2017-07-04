#pragma once
class Node
{
public:
	Node(void);
	~Node(void);
	Node(char newID);
	void setConnections(Node *n, Node *s, Node *e, Node *w);
	Node* getNorth();
	Node* getSouth();
	Node* getEast();
	Node* getWest();
	char getID();
private:
	char ID;
	Node *north, *south, *east, *west;
};

