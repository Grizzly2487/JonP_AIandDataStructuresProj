#pragma once
#include "Cases.h"




class CaseTwo : public Cases
{
private:


protected:


public:

	//Dialogue
	virtual void CaseDialogue()override;
	virtual void SolvedDialogue()override;

	//Start Case Two
	virtual void StartCase()override;

	//Detective Functions
	virtual void QuestionSuspect() override;
	virtual void CheckEmotion()override;
	virtual void Accuse()override;
	virtual void SolveCase()override;

	CaseTwo();
	~CaseTwo();
};

