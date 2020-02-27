#pragma once
#include "LinkList.h"
#include "Cases.h"

class CasePool
{
private:

	LinkList<Cases*> cases;
	LinkList<Cases*>::Iterator iterator;

protected:



public:

	CasePool();
	~CasePool();



};