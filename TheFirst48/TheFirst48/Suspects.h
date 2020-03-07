#pragma once
#include <iostream>
#include <string>
#include "Emotions.h"


using namespace std;
class Suspects
{
private:



protected:
	string name;

	bool isLiar = false;
	bool isKiller = false;

	Emotions defaultEmotion = NEUTRAL;
	Emotions currentEmotion;
	Emotions previousEmotion;

public:

	//Functions for suspects
	virtual void GetEmotion() = 0;
	virtual Emotions SetEmotion(Emotions changeEmotion) = 0;
	virtual void GetPreviousEmotion() = 0;
	virtual void ResetSuspect();

	virtual void GetName() = 0;
	virtual string SetName(string newName) = 0;
	
	virtual bool GetIsLiar() = 0;
	virtual bool SetIsLiar(bool changeState) = 0;
	
	virtual bool GetIsKiller() = 0;
	virtual bool SetIsKiller(bool newKiller) = 0;

	//AI Brain
	virtual void SuspectDialogue() = 0;

	//Suspect Main Dialogue
	virtual void NeutralDialogue() = 0;

	//Suspect isLiar Dialogue
	virtual void LiarDialogue() = 0;

	//Suspect Accused and !isLiar Dialogue
	virtual void AccusedDialogue() = 0;

	//Suspect Accused and isLiar Dialogue
	virtual void AccusedLiarDialogue() = 0;

	//Suspect Accused and isKiller Dialogue
	virtual void KillerDialogue() = 0;

	//Suspect Accused and !isKiller Dialogue
	virtual void NotKillerDialogue() = 0;


	//Emotion Dialogue
	virtual void EmotionDialogue() = 0;

	Suspects();
	~Suspects();

};
