#pragma once
#include "LinkList.h"
#include "StateMachines.h"


class Suspects
{
private:

	bool isLiar = false;
	bool isKiller = false;

	Emotions defaultEmotion = NEUTRAL;
	Emotions currentEmotion;
	Emotions previousEmotion;
	
	Emotions emotions;

protected:


public:

	virtual Emotions GetEmotion();
	virtual Emotions SetEmotion(Emotions changeEmotion);

	Suspects();
	~Suspects();

};
