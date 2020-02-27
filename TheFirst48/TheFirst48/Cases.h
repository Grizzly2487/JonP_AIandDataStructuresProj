#pragma once
#include "SuspectPool.h"
#include "StateMachines.h"
#include <iostream>
#include <string>




class Cases
{
private:
	
	
protected:

	Case currentCase = DEFAULT;

	bool isSolved = false;

public:

	//Dialogue
	virtual void CaseDialogue();
	virtual void SolvedDialogue();

	//Emotion Dialogue
	virtual void NeutralDialogue();
	virtual void AnxiousDialogue();
	virtual void AngryDialogue();
	virtual void SadDialogue();
	virtual void ScaredDialogue();

	//Suspect Main Dialogue
	virtual void Suspect1Dialogue();
	virtual void Suspect2Dialogue();
	virtual void Suspect3Dialogue();
	virtual void Suspect4Dialogue();
	virtual void Suspect5Dialogue();
	virtual void Suspect6Dialogue();

	//Suspect isLiar Dialogue
	virtual void Suspect1LiarDialogue();
	virtual void Suspect2LiarDialogue();
	virtual void Suspect3LiarDialogue();
	virtual void Suspect4LiarDialogue();
	virtual void Suspect5LiarDialogue();
	virtual void Suspect6LiarDialogue();

	//Suspect Accused and !isLiar Dialogue
	virtual void Suspect1AccusedDialogue();
	virtual void Suspect2AccusedDialogue();
	virtual void Suspect3AccusedDialogue();
	virtual void Suspect4AccusedDialogue();
	virtual void Suspect5AccusedDialogue();
	virtual void Suspect6AccusedDialogue();

	//Suspect Accused and isLiar Dialogue
	virtual void Suspect1LADialogue();
	virtual void Suspect2LADialogue();
	virtual void Suspect3LADialogue();
	virtual void Suspect4LADialogue();
	virtual void Suspect5LADialogue();
	virtual void Suspect6LADialogue();

	//Accused and isKiller Dialogue
	virtual void Suspect1KillerDialogue();
	virtual void Suspect2KillerDialogue();
	virtual void Suspect3KillerDialogue();
	virtual void Suspect4KillerDialogue();
	virtual void Suspect5KillerDialogue();
	virtual void Suspect6KillerDialogue();

	//Accused and !isKiller Dialogue
	virtual void Suspect1NKDialogue();
	virtual void Suspect2NKDialogue();
	virtual void Suspect3NKDialogue();
	virtual void Suspect4NKDialogue();
	virtual void Suspect5NKDialogue();
	virtual void Suspect6NKDialogue();

	virtual bool GetCase();
	virtual bool SetCase(bool newCase);

	Cases();
	~Cases();



};

