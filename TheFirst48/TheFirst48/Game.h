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


protected:


public:

	inline bool getIsPlaying()const { return this->isPlaying; }
	bool setIsPlaying(bool changeIsPlaying);
	void MainMenu();

	Game();
	~Game();

};

