#pragma once
#include "LinkList.h"
#include "Cases.h"

class CasePool
{
private:

	static CasePool* instance;

	LinkList<Cases*> cases;
	LinkList<Cases*>::Iterator iterator;

protected:



public:

	static CasePool* GetInstance();

	CasePool();
	~CasePool();



};