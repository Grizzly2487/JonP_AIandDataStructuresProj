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

public:

	Emotions GetEmotion();
	Emotions SetEmotion(Emotions changeEmotion);
	Emotions GetPreviousEmotion();

	string GetName();
	string SetName(string newName);

	bool GetIsLiar();
	bool SetIsLiar(bool changeState);

	bool GetIsKiller();
	bool SetIsKiller(bool newKiller);



	//Emotion Dialogue
	virtual void EmotionDialogue();

	Suspects();
	~Suspects();

};
