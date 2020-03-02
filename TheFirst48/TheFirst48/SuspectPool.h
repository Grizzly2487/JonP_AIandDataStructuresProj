#pragma once
#include "LinkList.h"
#include "SuspectOne.h"
#include "SuspectTwo.h"
#include "SuspectThree.h"
#include "SuspectFour.h"
#include "SuspectFive.h"
#include "SuspectSix.h"




class SuspectPool
{
private:

	static SuspectPool* instance;

	LinkList<Suspects*> suspects;
	LinkList<Suspects*>::Iterator iterator;

protected:



public:

	static SuspectPool* GetInstance();
	Suspects* GetCaseIterator();

	SuspectPool();
	~SuspectPool();



};

