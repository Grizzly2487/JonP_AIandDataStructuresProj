#include "CaseOne.h"

void CaseOne::CaseDialogue()
{
	cout << "\t\t\t ___________________________\n";
	cout << "\t\t\t|Insert Case 1 Dialogue Here|\n\n\n"; //have the 3 \n on the last line of dialogue to create the space between the text and choice menu
}

void CaseOne::SolvedDialogue()
{
	cout << "\t\t\tThe Case is Solved!\n\n";
}

void CaseOne::ChooseCulprits()
{
	//for (int i = 0; i < SuspectPool::GetInstance().size; i++)
	//{

	//}
}


void CaseOne::StartCase()
{
	isOnCase = true;
	while (isOnCase)
	{
		cout << "\n\n\n";
		cout << "\t\t\tWhat option would you like to pursue\n";
		cout << "\n\n";
		cout << "\t\t\tQuestion Suspect = Press 1\n";
		cout << "\t\t\tCheck Emotion of Suspect = Press 2\n";
		cout << "\t\t\tAccuse Suspect = Press 3\n";
		cout << "\t\t\tSolve the case = Press 4\n\n";
		cout << "\t\t\tQuit to Main Menu = Press 5\n\n";
		cout << "\t\t\tOption: ";
		cin >> option;

		switch (option)
		{
			case 1:
			{
				system("CLS");
				QuestionSuspect();
				break;
			}
			case 2:
			{
				system("CLS");
				CheckEmotion();
				break;
			}
			case 3:
			{
				system("CLS");
				Accuse();
				break;
			}
			case 4:
			{
				system("CLS");
				SolveCase();
				break;
			}
			case 5:
			{
				system("CLS");
				isOnCase = false;
				break;
			}
			default:
			{
				system("CLS");
				cout << "That is not a legal input.\n";
				break;
			}
		}

	}
}

void CaseOne::QuestionSuspect()
{
	while (isChoosingQ)
	{
		cout << "\n\n\n";
		SuspectPool::GetInstance()->GetSuspectIterator()->GetName();
		cout << "\t\t\tWhich suspect would you like to question?\n\n";
		cout << "\t\t\tCycle Left = Press 1\n";
		cout << "\t\t\tCycle Right = Press 2\n";
		cout << "\t\t\tChoose Suspect = Press 3\n";
		cout << "\t\t\tStop Questioning = Press 4\n\n";
		cout << "\t\t\tSuspect: ";
		cin >> suspect;

		switch (suspect)
		{
			case 1:
			{
				system("CLS");
				//go to previous suspect
				SuspectPool::GetInstance()->DecrementIterator();
				break;
			}
			case 2:
			{
				system("CLS");
				//go to next suspect
				SuspectPool::GetInstance()->IncrementIterator();
				break;
			}
			case 3:
			{
				//questioning stage
				//SuspectPool::GetInstance()->GetSuspectIterator()->
				break;
			}
			case 4:
			{
				//Back out of questioning
				isChoosingQ = false;
				break;
			}
			default:
			{
				cout << "That is not a legal input.\n";
				break;
			}
		}
	}
	isChoosingQ = true;
}

void CaseOne::CheckEmotion()
{
	SuspectPool::GetInstance()->GetSuspectIterator()->GetEmotion();
}

void CaseOne::Accuse()
{
	while (isChoosingA)
	{
		cout << "\n\n\n";
		SuspectPool::GetInstance()->GetSuspectIterator()->GetName();
		cout << "\t\t\tWhich suspect would you like to accuse?\n\n";
		cout << "\t\t\tCycle Left = Press 1\n";
		cout << "\t\t\tCycle Right = Press 2\n";
		cout << "\t\t\tChoose Suspect = Press 3\n";
		cout << "\t\t\tStop Accusation = Press 4\n";
		cout << "\n";
		cin >> suspect;

		switch (suspect)
		{
			case 1:
			{
				system("CLS");
				//go to previous suspect
				SuspectPool::GetInstance()->DecrementIterator();
				break;
			}
			case 2:
			{
				system("CLS");
				//go to next suspect
				SuspectPool::GetInstance()->IncrementIterator();
				break;
			}
			case 3:
			{
				//questioning stage
				break;
			}
			case 4:
			{
				//Back out of questioning
				isChoosingA = false;
				break;
			}
			default:
			{
				cout << "That is not a legal input.\n";
				break;
			}
		}
	}
	isChoosingA = true;
}

void CaseOne::SolveCase()
{
	while (isChoosingS)
	{
		cout << "\n\n\n";
		SuspectPool::GetInstance()->GetSuspectIterator()->GetName();
		cout << "\t\t\tWho is the Killer?\n\n";
		cout << "\t\t\tCycle Left = Press 1\n";
		cout << "\t\t\tCycle Right = Press 2\n";
		cout << "\t\t\tChoose Suspect = Press 3\n";
		cout << "\t\t\tContinue With Case = Press 4\n";
		cout << "\n";
		cin >> suspect;

		switch (suspect)
		{
			case 1:
			{
				system("CLS");
				//go to previous suspect
				SuspectPool::GetInstance()->DecrementIterator();
				break;
			}
			case 2:
			{
				system("CLS");
				//go to next suspect
				SuspectPool::GetInstance()->IncrementIterator();
				break;
			}
			case 3:
			{
				//questioning stage
				break;
			}
			case 4:
			{
				//Back out of questioning
				isChoosingS = false;
				break;
			}
			default:
			{
				cout << "That is not a legal input.\n";
				break;
			}
		}
	}
	isChoosingS = true;
}

CaseOne::CaseOne()
{}

CaseOne::~CaseOne()
{}
