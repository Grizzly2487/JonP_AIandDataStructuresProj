#pragma once
#include "Suspects.h"
class SuspectTwo : public Suspects
{
private:


protected:


public:

	//functions for suspects
	virtual void GetEmotion()override;
	virtual Emotions SetEmotion(Emotions changeEmotion)override;
	virtual void GetPreviousEmotion()override;

	virtual void GetName()override;
	virtual string SetName(string newName)override;

	virtual bool GetIsLiar()override;
	virtual bool SetIsLiar(bool changeState)override;

	virtual bool GetIsKiller()override;
	virtual bool SetIsKiller(bool newKiller)override;

	//AI Brain Dialogue
	virtual void SuspectDialogue()override;

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


	//Emotion Dialogue
	virtual void EmotionDialogue()override;

	SuspectTwo();
	~SuspectTwo();
};

