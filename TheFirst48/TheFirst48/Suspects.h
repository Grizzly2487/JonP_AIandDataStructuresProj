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
	Emotions currentEmotion = defaultEmotion;
	Emotions previousEmotion = NEUTRAL;
	Emotions* emotions;

public:

	//functions for suspects
	virtual Emotions GetEmotion();
	virtual Emotions SetEmotion(Emotions changeEmotion);
	virtual Emotions GetPreviousEmotion();
	
	virtual string GetName();
	virtual string SetName(string newName);
	
	virtual bool GetIsLiar();
	virtual bool SetIsLiar(bool changeState);
	
	virtual bool GetIsKiller();
	virtual bool SetIsKiller(bool newKiller);

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


	//Emotion Dialogue
	virtual void EmotionDialogue();

	Suspects();
	~Suspects();

};
