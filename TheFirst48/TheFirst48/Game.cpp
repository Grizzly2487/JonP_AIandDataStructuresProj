#include "Game.h"





bool Game::setIsPlaying(bool changeIsPlaying)
{
	isPlaying = changeIsPlaying;
	return isPlaying;
}

Game::Game()
{
	while (isPlaying)
	{
		system("CLS");
		cout << "\n\n\n";
		cout << "\t\t\t _________\n";
		cout << "\t\t\t|Main Menu|\n";
		cout << "\n\n";
		cout << "\t\t\t1 = Case 1\n";
		cout << "\t\t\t2 = Case 2\n";
		cout << "\t\t\t3 = Case 3\n";
		cout << "\t\t\t0 = Quit\n";
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

}

Game::~Game()
{}
