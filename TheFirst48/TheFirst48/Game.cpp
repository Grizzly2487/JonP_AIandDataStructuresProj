#include "Game.h"




Game::Game()
{
	CasePool* casePool = CasePool::GetInstance();
	//SuspectPool* suspectPool = SuspectPool::GetInstance();

	while (isPlaying)
	{
		Intro();
		cout << "\n\n\n";
		cout << "\t\t\t _________\n";
		cout << "\t\t\t|Main Menu|\n";
		cout << "\n\n";
		casePool->GetCaseIterator()->CaseDialogue();
		cout << "\t\t\tGo Back = Press 1\n";
		cout << "\t\t\tGo Forward = Press 2\n";
		cout << "\t\t\tEnter = Press 3\n";
		cout << "\t\t\tQuit = Press 4\n\n";
		cout << "\t\t\tOption: ";

		cin >> choice;
		//cin.clear();

		switch (choice)
		{
			case 1:
			{
				system("CLS");
				//go to previous case
				casePool->DecrementIterator();
				break;
			}
			case 2:
			{
				system("CLS");
				//go to next case
				casePool->IncrementIterator();
				break;
			}
			case 3:
			{
				system("CLS");
				//choose selected case.
				casePool->GetCaseIterator()->StartCase();
				break;
			}
			case 4:
			{
				system("CLS");
				isPlaying = false;
				break;
			}
			default:
			{
				cout << "That is not a legal input.\n";
				break;
			}
		}
	}
	isPlaying = true;

}


bool Game::setIsPlaying(bool changeIsPlaying)
{
	isPlaying = changeIsPlaying;
	return isPlaying;
}
void Game::Intro()
{
	while (isStartScreen)
	{
		cout << "\n\n";
		cout << "\t\tWhen a crime has been commited, the timer has begun.\n\n\n";
		cout << "\t\tWhile most cases are solved within the first 48, some go on days, weeks, months, or even years after..\n\n\n";
		cout << "\t\tAs a detective, you have only 48 hours, before the trail goes cold..\n\n\n\n";
		cout << "\t\t\t ______________\n";
		cout << "\t\t\t| The First 48 |\n\n\n\n";
		cout << "\t\t\tPRESS 0 TO CONTINUE\n\n";
		cout << "\t\t\tContinue: ";
		cin >> changeScreen;
		//cin.clear();

		switch (changeScreen)
		{
		case 0:
			system("CLS");
			isStartScreen = false;
			break;
		default:
			system("CLS");
			cout << "That is the wrong input, try again.\n";
			break;
		}
	}
}
Game::~Game()
{}
