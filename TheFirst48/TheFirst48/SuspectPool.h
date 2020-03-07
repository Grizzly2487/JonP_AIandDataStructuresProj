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

	int cArray[3];
	Suspects* liarPool[3];

	static SuspectPool* instance;

	LinkList<Suspects*> suspects;
	LinkList<Suspects*>::Iterator iterator;

protected:



public:

	static SuspectPool* GetInstance();
	Suspects* GetSuspectIterator();

	//Functions
	void ChooseCulprits(); //Randomize Suspects and Choose 3 to be the Liars, and 1 Killer of the 3 Liars.
	void ResetSuspects();
	unsigned GetSize(); //Gets the size of the pool.
	void IncrementIterator();
	void DecrementIterator();
	SuspectPool();
	~SuspectPool();



};

