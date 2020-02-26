#include "Game.h"





int Game::getChoice()
{
	return choice;
}
int Game::setChoice(int newChoice)
{
	choice = newChoice;
	return choice;
}
bool Game::setIsPlaying(bool changeIsPlaying)
{
	isPlaying = changeIsPlaying;
	return isPlaying;
}

Game::Game()
{
	cout << "Main Menu\n";
	cout << "\n\n";
	cout << "\t1 = Case 1\n";
	cout << "\t2 = Case 2\n";
	cout << "\t3 = Case 3\n";
	cout << "\t0 = Quit\n";
	cout << "\tChoice: ";
	cin >> choice;

	switch (choice)
	{
	case 0:
		setIsPlaying(false);
		system("CLS");
		cout << "\n\n";
		cout << "\t\tThank You For Playing!\n";
		cout << "\n\n";
		break;
		//case 1:
		//	change to case 1
		//	break;
		//case 2:
		//	change to case 2
		//	break;
		//case 3:
		//	change to case 3
		//	break;
	default:
		break;
	}
}

Game::~Game()
{}
