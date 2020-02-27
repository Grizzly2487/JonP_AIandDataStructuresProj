#pragma once
#include <iostream>
#include <string>
#include "StateMachines.h"
#include "CaseOne.h"
#include "CaseTwo.h"
#include "CaseThree.h"

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

	Emotions* emotions;

public:

	virtual Emotions GetEmotion();
	virtual Emotions SetEmotion(Emotions changeEmotion);

	Suspects();
	~Suspects();

};
