#include "Game.h"




Game::Game()
{
	while (isPlaying)
	{
		cout << "\n\n\n";
		cout << "\t\t\t _________\n";
		cout << "\t\t\t|Main Menu|\n";
		cout << "\n\n";
		cout << "\t\t\tCase 1 = Press 1\n";
		cout << "\t\t\tCase 2 = Press 2\n";
		cout << "\t\t\tCase 3 = Press 3\n";
		cout << "\t\t\tQuit = Press 0\n\n";
		cout << "\t\t\tChoice: ";
		cin >> choice;

		switch (choice)
		{
			case 0:
				setIsPlaying(false);
				system("CLS");
				cout << "\n\n\n\n";
				cout << "\t\tThank You For Playing!\n";
				cout << "\n\n\n\n";
				break;
			case 1:
				system("CLS");
				break;
			case 2:
				system("CLS");
				break;
			case 3:
				system("CLS");
				break;
			default:
				system("CLS");
				cout << "That is not a legal option. \n";
				break;
		}
	}

}

void Game::ObserveScene()
{
	if (CASEONE)
	{
		C1->CaseDialogue();
	}
	else if (CASETWO)
	{
		C2->CaseDialogue();
	}
	else if (CASETHREE)
	{
		C3->CaseDialogue();
	}
}

void Game::QuestionSuspect()
{
	if (CASEONE)
	{
		C1->NeutralDialogue();
	}
	else if (CASETWO)
	{
		C2->NeutralDialogue();
	}
	else if (CASETHREE)
	{
		C3->NeutralDialogue();
	}
}

void Game::CheckEmotion()
{
	if (CASEONE)
	{
		
	}
	else if (CASETWO)
	{

	}
	else if (CASETHREE)
	{

	}
}

void Game::Accuse()
{
	if (CASEONE)
	{

	}
	else if (CASETWO)
	{

	}
	else if (CASETHREE)
	{

	}
}

void Game::SolveCase()
{
	if (CASEONE)
	{

	}
	else if (CASETWO)
	{

	}
	else if (CASETHREE)
	{

	}
}

bool Game::setIsPlaying(bool changeIsPlaying)
{
	isPlaying = changeIsPlaying;
	return isPlaying;
}
Game::~Game()
{}
