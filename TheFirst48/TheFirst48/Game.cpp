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

bool Game::setIsPlaying(bool changeIsPlaying)
{
	isPlaying = changeIsPlaying;
	return isPlaying;
}
Game::~Game()
{}
