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
	Emotions previousEmotion;

	Emotions* emotions;

public:

	Emotions GetEmotion();
	Emotions SetEmotion(Emotions changeEmotion);

	SuspectList SuspectOne();
	SuspectList SuspectTwo();
	SuspectList SuspectThree();
	SuspectList SuspectFour();
	SuspectList SuspectFive();
	SuspectList SuspectSix();

	Suspects();
	~Suspects();

};
