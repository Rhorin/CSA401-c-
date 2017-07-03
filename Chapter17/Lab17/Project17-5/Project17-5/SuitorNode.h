#pragma once
class SuitorNode
{
public:
	SuitorNode(void);
	~SuitorNode(void);
	SuitorNode(int suitorNum);
	int getNum();
	SuitorNode* getNext();
	void setNext(SuitorNode *nextNode);
private:
	SuitorNode *next;
	int num;
};

