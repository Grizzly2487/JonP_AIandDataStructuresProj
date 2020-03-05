#pragma once
#include "LinkList.h"
#include "SuspectOne.h"
#include "SuspectTwo.h"
#include "SuspectThree.h"
#include "SuspectFour.h"
#include "SuspectFive.h"
#include "SuspectSix.h"
#include <cstdlib>
#include <time.h>



class SuspectPool
{
private:

	static SuspectPool* instance;

	LinkList<Suspects*> suspects;
	LinkList<Suspects*>::Iterator iterator;

protected:



public:

	static SuspectPool* GetInstance();
	Suspects* GetSuspectIterator();


	//Randomize Suspects and Choose 3 to be the Liars, and 1 Killer of the 3 Liars.
	void ChooseCulprits();

	unsigned GetSize();
	void IncrementIterator();
	void DecrementIterator();

	SuspectPool();
	~SuspectPool();



};

