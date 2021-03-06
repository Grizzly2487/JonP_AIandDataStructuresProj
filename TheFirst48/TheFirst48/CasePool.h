#pragma once
#include "LinkList.h"
#include "CaseOne.h"
#include "CaseTwo.h"
#include "CaseThree.h"

class CasePool
{
private:

	static CasePool* instance;

	LinkList<Cases*> cases;
	LinkList<Cases*>::Iterator iterator;

protected:



public:

	static CasePool* GetInstance();
	Cases* GetCaseIterator();

	void GetSize();
	void IncrementIterator();
	void DecrementIterator();

	CasePool();
	~CasePool();



};