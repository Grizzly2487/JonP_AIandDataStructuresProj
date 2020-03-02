#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <ctime>
#include "CasePool.h"
#include "SuspectPool.h"
#include "CaseOne.h"
#include "CaseTwo.h"
#include "CaseThree.h"
#define KEY_LEFT 75
#define KEY_RIGHT 77
//#define KEY_ENTER "insert number here"


using namespace std;

class Game
{

private:
	
	CasePool* casePool;
	SuspectPool* suspectPool;

	Cases* currentCase;
	
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

