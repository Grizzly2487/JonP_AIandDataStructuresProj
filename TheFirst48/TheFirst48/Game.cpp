#include "Game.h"




void Game::MainMenu()
{
	cout << "Main Menu\n";
	cout << "\n\n";
	cout << "\t0 = Quit\n";
	cout << "\t1 = Case 1\n";
	cout << "\t2 = Case 2\n";
	cout << "\t3 = Case 3\n";
	cout << "\tChoice: ";
	cin >> choice;

	switch (choice)
	{
		case 0:
			setIsPlaying(false);
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
bool Game::setIsPlaying(bool changeIsPlaying)
{
	isPlaying = changeIsPlaying;
	return isPlaying;
}
Game::Game()
{
}

Game::~Game()
{
}
