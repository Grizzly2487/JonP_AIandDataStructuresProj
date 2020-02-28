#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "CaseOne.h"
#include "CaseTwo.h"
#include "CaseThree.h"




using namespace std;

class Game
{

private:

	CaseOne* C1;
	CaseTwo* C2;
	CaseThree* C3;
	
	int choice;
	bool isPlaying = true;
	static Game* instance;

protected:


public:

	//Detective Functions
	void ObserveScene();
	void QuestionSuspect();
	void CheckEmotion();
	void Accuse();
	void SolveCase();

	inline bool getIsPlaying()const { return this->isPlaying; }
	bool setIsPlaying(bool changeIsPlaying);

	Game();
	~Game();

};

