#include "StartScreen.h"



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
		cout << "\n\n";
		cout << "\t\tThe First 48\n\n";
		cout << "\t\tPRESS 0 TO CONTINUE\n\n";
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
}

StartScreen::~StartScreen()
{}
