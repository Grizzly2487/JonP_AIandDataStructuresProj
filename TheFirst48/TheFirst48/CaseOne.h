#pragma once
#include "Cases.h"



class CaseOne : public Cases
{
private:

	
protected:


public:

	//Dialogue
	virtual void CaseDialogue()override;
	virtual void SolvedDialogue()override;

	//Suspect Main Dialogue
	virtual void NeutralDialogue()override;

	//Suspect isLiar Dialogue
	virtual void LiarDialogue()override;

	//Suspect Accused and !isLiar Dialogue
	virtual void AccusedDialogue()override;

	//Suspect Accused and isLiar Dialogue
	virtual void AccusedLiarDialogue()override;

	//Suspect Accused and isKiller Dialogue
	virtual void KillerDialogue()override;

	//Suspect Accused and !isKiller Dialogue
	virtual void NotKillerDialogue()override;

	//Start Case One
	virtual void StartCase()override;

	//Detective Functions
	virtual void QuestionSuspect() override;
	virtual void CheckEmotion()override;
	virtual void Accuse()override;
	virtual void SolveCase()override;

	CaseOne();
	~CaseOne();
};

