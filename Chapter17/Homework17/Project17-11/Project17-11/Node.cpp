#include "Node.h"
#include <iostream>

Node::Node(void) : ID(' '), north(NULL), south(NULL), east(NULL), west(NULL)
{
}

Node::Node(char newID) : ID(newID), north(NULL), south(NULL), east(NULL), west(NULL)
{

}

Node::~Node(void)
{
}

char Node::getID()
{
	return ID;
}

void Node::setConnections(Node *n, Node *s, Node *e, Node *w)
{
	north = n;
	south = s;
	east = e;
	west = w;
}

Node* Node::getNorth()
{
	return north;
}
Node* Node::getSouth()
{
	return south;
}
Node* Node::getEast()
{
	return east;
}
Node* Node::getWest()
{
	return west;
}
