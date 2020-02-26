#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Game
{

private:

	int choice;
	bool isPlaying = true;
	static Game* instance;

protected:


public:


	inline bool getIsPlaying()const { return this->isPlaying; }
	bool setIsPlaying(bool changeIsPlaying);

	Game();
	~Game();

};

