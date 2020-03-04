#pragma once
#include "SuspectPool.h"
#include "Emotions.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>



class Cases
{
private:
	
protected:

	int hoursLeft = 48;

	int option;
	int suspect;
	int qOption;

	bool isChoosingQ = true;
	bool isChoosingA = true;
	bool isChoosingS = true;
	bool isQuestioning = true;
	bool isOnCase = false;
	bool isSolved = false;

public:

	//Dialogue
	virtual void CaseDialogue() = 0;
	virtual void SolvedDialogue() = 0;

	//Randomize Suspects and Choose 3 to be the Liars, and 1 Killer of the 3 Liars.
	virtual void ChooseCulprits() = 0;

	//Start Current Case
	virtual void StartCase() = 0;

	//Detective Functions
	virtual void QuestionSuspect() = 0;
	virtual void CheckEmotion() = 0;
	virtual void Accuse() = 0;
	virtual void SolveCase() = 0;

	//Stage Functions
	virtual void QuestioningStage() = 0;
	virtual void AccusationStage() = 0;
	virtual void SolvingStage() = 0;

	Cases() {};
	~Cases() {};



};

