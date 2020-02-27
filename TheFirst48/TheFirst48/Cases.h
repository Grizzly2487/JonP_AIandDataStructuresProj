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
	void CaseDialogue();
	void SolvedDialogue();

	//Emotion Dialogue
	void NeutralDialogue();
	void AnxiousDialogue();
	void AngryDialogue();
	void SadDialogue();
	void ScaredDialogue();

	//Suspect Main Dialogue
	void Suspect1Dialogue();
	void Suspect2Dialogue();
	void Suspect3Dialogue();
	void Suspect4Dialogue();
	void Suspect5Dialogue();
	void Suspect6Dialogue();

	//Suspect isLiar Dialogue
	void Suspect1LiarDialogue();
	void Suspect2LiarDialogue();
	void Suspect3LiarDialogue();
	void Suspect4LiarDialogue();
	void Suspect5LiarDialogue();
	void Suspect6LiarDialogue();

	//Suspect Accused and !isLiar Dialogue
	void Suspect1AccusedDialogue();
	void Suspect2AccusedDialogue();
	void Suspect3AccusedDialogue();
	void Suspect4AccusedDialogue();
	void Suspect5AccusedDialogue();
	void Suspect6AccusedDialogue();

	//Suspect Accused and isLiar Dialogue
	void Suspect1LADialogue();
	void Suspect2LADialogue();
	void Suspect3LADialogue();
	void Suspect4LADialogue();
	void Suspect5LADialogue();
	void Suspect6LADialogue();

	//Accused and isKiller Dialogue
	void Suspect1KillerDialogue();
	void Suspect2KillerDialogue();
	void Suspect3KillerDialogue();
	void Suspect4KillerDialogue();
	void Suspect5KillerDialogue();
	void Suspect6KillerDialogue();

	//Accused and !isKiller Dialogue
	void Suspect1NKDialogue();
	void Suspect2NKDialogue();
	void Suspect3NKDialogue();
	void Suspect4NKDialogue();
	void Suspect5NKDialogue();
	void Suspect6NKDialogue();

	Case GetCase();
	Case SetCase(Case newCase);

	Cases();
	~Cases();



};

