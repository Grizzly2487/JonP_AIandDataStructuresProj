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
	SuspectPool* suspectPool;

	int suspect;
	int choice;
	bool isPlaying = true;
	bool isChoosingQ = true;
	bool isChoosingA = true;
	bool isChoosingS = true;
	static Game* instance;

protected:


public:

	//Detective Functions
	void QuestionSuspect();
	void CheckEmotion();
	void Accuse();
	void SolveCase();

	inline bool getIsPlaying()const { return this->isPlaying; }
	bool setIsPlaying(bool changeIsPlaying);

	Game();
	~Game();

};

