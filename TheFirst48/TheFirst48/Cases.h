#pragma once
#include "SuspectPool.h"
#include "States.h"
#include <iostream>
#include <string>




class Cases
{
private:
	
protected:

	int hoursLeft = 48;

	int mOption;
	int qOption;	
	int qOption2;
	int aOption;
	int suspect;

	bool isChoosingQ = true;
	bool isChoosingA = true;
	bool isChoosingS = true;
	bool isQuestioning = true;
	bool isAccusing = true;
	bool isBelieving = true;
	bool isOnCase = true;
	bool isSolved = false;

public:

	//Dialogue
	virtual void CaseDialogue() = 0;
	virtual void SolvedDialogue() = 0;
	virtual void GameOverDialogue() = 0;

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

	virtual int GetHoursLeft() = 0;
	Cases();
	~Cases();



};

