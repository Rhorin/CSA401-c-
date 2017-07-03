#include "SuitorNode.h"
#include <iostream>

SuitorNode::SuitorNode(void) : num(0), next(NULL)
{
}

SuitorNode::SuitorNode(int suitorNum) : num(suitorNum), next(NULL)
{

}
SuitorNode::~SuitorNode(void)
{
}

int SuitorNode::getNum()
{
	return num;
}

SuitorNode* SuitorNode::getNext()
{
	return next;
}

void SuitorNode::setNext(SuitorNode *nextNode)
{
	next - nextNode;
}