#pragma once
#include "SuspectPool.h"
#include "Emotions.h"
#include <iostream>
#include <string>




class Cases
{
private:
	
	
protected:

	int option;
	int suspect;

	bool isChoosingQ = true;
	bool isChoosingA = true;
	bool isChoosingS = true;
	bool isOnCase = false;
	bool isSolved = false;

public:

	//Dialogue
	virtual void CaseDialogue();
	virtual void SolvedDialogue();

	//Start Current Case
	virtual void StartCase();

	//Detective Functions
	virtual void QuestionSuspect();
	virtual void CheckEmotion();
	virtual void Accuse();
	virtual void SolveCase();
	Cases();
	~Cases();



};

