#include "StartScreen.h"


using namespace std;
StartScreen::StartScreen()
{
	
	while (isStartScreen)
	{
		cout << "\n\n";
		cout << "\tWhen a crime has been commited, the timer has begun.\n";
		cout << "\n\n";
		cout << "\tWhile most cases are solved within the first 48, some go on days, weeks, months, or even years after..\n";
		cout << "\n\n";
		cout << "\tAs a detective, you have only 48 hours, before the trail goes cold..\n";
		cout << "\n\n\n";
		cout << "\t\t\t\t ______________\n";
		cout << "\t\t\t\t| The First 48 |\n\n\n\n";
		cout << "\t\t\t\tPRESS 0 TO CONTINUE\n\n";
		cin >> changeScreen;

		switch (changeScreen)
		{
		case 0:
			isStartScreen = false;
			system("CLS");
			break;
		default:
			system("CLS");
			cout << "That is the wrong input, try again.\n";
			break;
		}
	}
	system("CLS");
}

StartScreen::~StartScreen()
{}
