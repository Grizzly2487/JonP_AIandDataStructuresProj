#pragma once
#include <iostream>
#include <string>

using namespace std;

class StartScreen
{
public:
	StartScreen();
	~StartScreen();

private:
	bool isStartScreen = true;
	int changeScreen;
};
