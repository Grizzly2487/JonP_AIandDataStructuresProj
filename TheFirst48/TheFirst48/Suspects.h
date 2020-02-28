#pragma once
#include <iostream>
#include <string>
#include "StateMachines.h"


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
	Emotions previousEmotion = NEUTRAL;
	Emotions* emotions;

	SuspectList suspect = DEFAULT;

public:

	void GetEmotion();
	void GetPreviousEmotion();
	Emotions SetEmotion(Emotions changeEmotion);

	//Emotion Dialogue
	virtual void EmotionDialogue();

	Suspects();
	~Suspects();

};
