#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "CasePool.h"
#include "SuspectPool.h"
#include "CaseOne.h"
#include "CaseTwo.h"
#include "CaseThree.h"



using namespace std;

class Game
{

private:
	
	CasePool* casePool;

	int choice;

	bool isPlaying = true;

	static Game* instance;

protected:


public:

	inline bool getIsPlaying()const { return this->isPlaying; }
	bool setIsPlaying(bool changeIsPlaying);

	Game();
	~Game();

};

