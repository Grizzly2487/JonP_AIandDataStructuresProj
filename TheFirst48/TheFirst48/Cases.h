#pragma once
#include "SuspectPool.h"
#include "StateMachines.h"
#include <iostream>
#include <string>




class Cases
{
private:
	
	
protected:

	SuspectPool* suspectPool;

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

	//Suspect Main Dialogue
	virtual void NeutralDialogue();

	//Suspect isLiar Dialogue
	virtual void LiarDialogue();

	//Suspect Accused and !isLiar Dialogue
	virtual void AccusedDialogue();

	//Suspect Accused and isLiar Dialogue
	virtual void AccusedLiarDialogue();

	//Suspect Accused and isKiller Dialogue
	virtual void KillerDialogue();

	//Suspect Accused and !isKiller Dialogue
	virtual void NotKillerDialogue();

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

