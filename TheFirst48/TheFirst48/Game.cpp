#include "Game.h"




Game::Game()
{
	while (isPlaying)
	{
		cout << "\n\n\n";
		cout << "\t\t\t _________\n";
		cout << "\t\t\t|Main Menu|\n";
		cout << "\n\n";
		cout << "\t\t\tPress enter to choose case.\n";
		cout << "\t\t\tArrow keys to change cases.\n";
		cout << "\t\t\tQuit = Press 0\n\n";
		cout << "\t\t\tChoice: ";

		casePool->GetCaseIterator()->CaseDialogue();

		cin >> choice;

		switch (choice)
		{
			case KEY_LEFT:
			{
				//go to previous case until beginning of list is hit.
				break;
			}
			case KEY_RIGHT:
			{
				//go to next case until the end of the list is hit.
				break;
			}
			//case KEY_ENTER:
			//{
			//	//choose selected case.
			//	break;
			//}
			default:
			{
				cout << "That is not a legal input.\n";
				break;
			}
		}
	}
	isPlaying = true;

}


void Game::QuestionSuspect()
{
	if (CASEONE)
	{
		while (isChoosingQ)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
				case 1:
				{
					isChoosingQ = false;
					break;
				}
				case 2:
				{
					isChoosingQ = false;
					break;
				}
				case 3:
				{
					isChoosingQ = false;
					break;
				}
				case 4:
				{
					isChoosingQ = false;
					break;
				}
				case 5:
				{
					isChoosingQ = false;
					break;
				}
				case 6:
				{
					isChoosingQ = false;
					break;
				}
				default:
				{
					cout << "Not a valid input.\n";
					break;
				}
			}
		}
		isChoosingQ = true;
	}
	else if (CASETWO)
	{
		while (isChoosingA)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
				case 1:
				{
					isChoosingA = false;
					break;
				}
				case 2:
				{
					isChoosingA = false;
					break;
				}
				case 3:
				{
					isChoosingA = false;
					break;
				}
				case 4:
				{
					isChoosingA = false;
					break;
				}
				case 5:
				{
					isChoosingA = false;
					break;
				}
				case 6:
				{
					isChoosingA = false;
					break;
				}
				default:
				{
					cout << "Not a valid input.\n";
					break;
				}
			}
		}
		isChoosingA = true;
	}
	else if (CASETHREE)
	{
		while (isChoosingS)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
				case 1:
				{
					isChoosingS = false;
					break;
				}
				case 2:
				{
					isChoosingS = false;
					break;
				}
				case 3:
				{
					isChoosingS = false;
					break;
				}
				case 4:
				{
					isChoosingS = false;
					break;
				}
				case 5:
				{
					isChoosingS = false;
					break;
				}
				case 6:
				{
					isChoosingS = false;
					break;
				}
				default:
				{
					cout << "Not a valid input.\n";
					break;
				}
			}
		}
		isChoosingS = true;
	}
}

void Game::CheckEmotion()
{
	if (CASEONE)
	{
		if (SUSONE)
		{

		}
		else if (SUSTWO)
		{

		}
		else if (SUSTHREE)
		{

		}
		else if (SUSFOUR)
		{

		}
		else if (SUSFIVE)
		{

		}
		else if (SUSSIX)
		{

		}
	}
	else if (CASETWO)
	{
		if (SUSONE)
		{

		}
		else if (SUSTWO)
		{

		}
		else if (SUSTHREE)
		{

		}
		else if (SUSFOUR)
		{

		}
		else if (SUSFIVE)
		{

		}
		else if (SUSSIX)
		{

		}
	}
	else if (CASETHREE)
	{
		if (SUSONE)
		{
			
		}
		else if (SUSTWO)
		{

		}
		else if (SUSTHREE)
		{

		}
		else if (SUSFOUR)
		{

		}
		else if (SUSFIVE)
		{

		}
		else if (SUSSIX)
		{

		}
	}
}

void Game::Accuse()
{
	if (CASEONE)
	{
		while (isChoosingA)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
			case 1:
			{
				isChoosingA = false;
				break;
			}
			case 2:
			{
				isChoosingA = false;
				break;
			}
			case 3:
			{
				isChoosingA = false;
				break;
			}
			case 4:
			{
				isChoosingA = false;
				break;
			}
			case 5:
			{
				isChoosingA = false;
				break;
			}
			case 6:
			{
				isChoosingA = false;
				break;
			}
			default:
			{
				cout << "Not a valid input.\n";
				break;
			}
			}
		}
		isChoosingA = true;
	}
	else if (CASETWO)
	{
		while (isChoosingA)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
			case 1:
			{
				isChoosingA = false;
				break;
			}
			case 2:
			{
				isChoosingA = false;
				break;
			}
			case 3:
			{
				isChoosingA = false;
				break;
			}
			case 4:
			{
				isChoosingA = false;
				break;
			}
			case 5:
			{
				isChoosingA = false;
				break;
			}
			case 6:
			{
				isChoosingA = false;
				break;
			}
			default:
			{
				cout << "Not a valid input.\n";
				break;
			}
			}
		}
		isChoosingA = true;
	}
	else if (CASETHREE)
	{
		while (isChoosingA)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
			case 1:
			{
				isChoosingA = false;
				break;
			}
			case 2:
			{
				isChoosingA = false;
				break;
			}
			case 3:
			{
				isChoosingA = false;
				break;
			}
			case 4:
			{
				isChoosingA = false;
				break;
			}
			case 5:
			{
				isChoosingA = false;
				break;
			}
			case 6:
			{
				isChoosingA = false;
				break;
			}
			default:
			{
				cout << "Not a valid input.\n";
				break;
			}
			}
		}
		isChoosingA = true;
	}
}
void Game::SolveCase()
{
	if (CASEONE)
	{
		while (isChoosingS)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
				case 1:
				{
					isChoosingS = false;
					break;
				}
				case 2:
				{
					isChoosingS = false;
					break;
				}
				case 3:
				{
					isChoosingS = false;
					break;
				}
				case 4:
				{
					isChoosingS = false;
					break;
				}
				case 5:
				{
					isChoosingS = false;
					break;
				}
				case 6:
				{
					isChoosingS = false;
					break;
				}
				default:
				{
					cout << "Not a valid input.\n";
					break;
				}
			}
		}
		isChoosingS = true;
	}
	else if (CASETWO)
	{
		while (isChoosingS)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
				case 1:
				{
					isChoosingS = false;
					break;
				}
				case 2:
				{
					isChoosingS = false;
					break;
				}
				case 3:
				{
					isChoosingS = false;
					break;
				}
				case 4:
				{
					isChoosingS = false;
					break;
				}
				case 5:
				{
					isChoosingS = false;
					break;
				}
				case 6:
				{
					isChoosingS = false;
					break;
				}
				default:
				{
					cout << "Not a valid input.\n";
					break;
				}
			}
		}
		isChoosingS = true;
	}
	else if (CASETHREE)
	{
		while (isChoosingS)
		{
			cout << "Which Suspect would you like to question?\n";
			cout << "Suspect 1 = 1\n";
			cout << "Suspect 2 = 2\n";
			cout << "Suspect 3 = 3\n";
			cout << "Suspect 4 = 4\n";
			cout << "Suspect 5 = 5\n";
			cout << "Suspect 6 = 6\n";
			cout << "\n";
			cin >> suspect;

			switch (suspect)
			{
				case 1:
				{
					isChoosingS = false;
					break;
				}
				case 2:
				{
					isChoosingS = false;
					break;
				}
				case 3:
				{
					isChoosingS = false;
					break;
				}
				case 4:
				{
					isChoosingS = false;
					break;
				}
				case 5:
				{
					isChoosingS = false;
					break;
				}
				case 6:
				{
					isChoosingS = false;
					break;
				}
				default:
				{
					cout << "Not a valid input.\n";
					break;
				}
			}
		}
		isChoosingS = true;
	}
}

bool Game::setIsPlaying(bool changeIsPlaying)
{
	isPlaying = changeIsPlaying;
	return isPlaying;
}
Game::~Game()
{}
