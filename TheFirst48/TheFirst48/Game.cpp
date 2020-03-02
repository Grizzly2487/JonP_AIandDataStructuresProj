#include "Game.h"




Game::Game()
{
	CasePool* casePool = CasePool::GetInstance();
	SuspectPool* suspectPool = SuspectPool::GetInstance();

	while (isPlaying)
	{
		cout << "\n\n\n";
		cout << "\t\t\t _________\n";
		cout << "\t\t\t|Main Menu|\n";
		cout << "\n\n";
		casePool->GetCaseIterator()->CaseDialogue();
		cout << "\t\t\tGo Back = Press 1\n";
		cout << "\t\t\tGo Forward = Press 2\n";
		cout << "\t\t\tEnter = Press 3\n";
		cout << "\t\t\tQuit = Press 4\n\n";
		cout << "\t\t\tChoice: ";

		cin >> choice;

		switch (choice)
		{
			case 1:
			{
				system("CLS");
				//go to previous case until beginning of list is hit.
				
				break;
			}
			case 2:
			{
				system("CLS");
				//go to next case until the end of the list is hit.
				break;
			}
			case 3:
			{
				system("CLS");
				//choose selected case.
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


void Game::QuestionSuspect()
{
	if (CASEONE)
	{
		while (isChoosingQ)
		{
			cout << "Which suspect would you like to question?\n";
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
			cout << "Which suspect would you like to question?\n";
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
			cout << "Which suspect would you like to question?\n";
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
			cout << "Which suspect would you like to Accuse?\n";
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
			cout << "Which suspect would you like to Accuse?\n";
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
			cout << "Which suspect would you like to Accuse?\n";
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
			cout << "Which suspect would you like to accuse of being the killer?\n";
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
			cout << "Which suspect would you like to accuse of being the killer?\n";
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
			cout << "Which suspect would you like to accuse of being the killer?\n";
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
