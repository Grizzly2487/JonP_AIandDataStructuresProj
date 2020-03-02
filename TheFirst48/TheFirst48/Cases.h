#pragma once
#include "SuspectPool.h"
#include "StateMachines.h"
#include <iostream>
#include <string>




class Cases
{
private:
	
	
protected:

	Case currentCase = DEFAULTCASE;

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

	Cases();
	~Cases();



};

