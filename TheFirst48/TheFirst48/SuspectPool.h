#pragma once
#include "LinkList.h"
#include "Suspects.h"




class SuspectPool
{
private:

	static SuspectPool* instance;

	LinkList<Suspects*> suspects;
	LinkList<Suspects*>::Iterator iterator;

protected:



public:

	static SuspectPool* GetInstance();

	SuspectPool();
	~SuspectPool();



};

