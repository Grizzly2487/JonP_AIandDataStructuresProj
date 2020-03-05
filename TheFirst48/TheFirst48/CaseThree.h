#pragma once
#include "Cases.h"




class CaseThree : public Cases
{
private:


protected:


public:

	//Dialogue
	virtual void CaseDialogue()override;
	virtual void SolvedDialogue()override;
	virtual void GameOverDialogue()override;

	//Start Case Three
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

	CaseThree();
	~CaseThree();
};

