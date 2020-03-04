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
	virtual void GameOverDialogue()override;

	//Randomize Suspects and Choose 3 to be the Liars, and 1 Killer of the 3 Liars.
	virtual void ChooseCulprits()override;

	//Start Case One
	virtual void StartCase()override;

	//Detective Functions
	virtual void QuestionSuspect() override;
	virtual void CheckEmotion()override;
	virtual void Accuse()override;
	virtual void SolveCase()override;

	//Stage Functions
	virtual void QuestioningStage()override;
	virtual void AccusationStage()override;
	virtual void SolvingStage()override;

	CaseOne();
	~CaseOne();
};

