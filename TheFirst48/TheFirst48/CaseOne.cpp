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
	srand(time(NULL));
	int randSuspect1 = rand() % 6;
	int randSuspect2 = rand() % 6;
	int randSuspect3 = rand() % 6;

	for (int i = 0, n = SuspectPool::GetInstance()->GetSize(); i < n; i++)
	{
		
	}
}


void CaseOne::StartCase()
{
	isOnCase = true;
	while (isOnCase)
	{
		cout << "\t\t\t\t\t\t" << hoursLeft << "\n";
		cout << "\n\n\n";
		cout << "\t\t\tWhat option would you like to pursue\n";
		cout << "\n\n";
		cout << "\t\t\tQuestion Suspect = Press 1\n";
		cout << "\t\t\tAccuse Suspect = Press 2\n";
		cout << "\t\t\tSolve the case = Press 3\n\n";
		cout << "\t\t\tQuit to Main Menu = Press 4\n\n";
		cout << "\t\t\tOption: ";
		cin >> option;

		switch (option)
		{
			case 1:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
				QuestionSuspect();
				break;
			}
			case 2:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
				Accuse();
				break;
			}
			case 3:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
				SolveCase();
				break;
			}
			case 4:
			{
				hoursLeft = 48;
				system("CLS");
				isOnCase = false;
				break;
			}
			default:
			{
				hoursLeft = hoursLeft - 1;
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
		cout << "\t\t\t\t\t\t" << hoursLeft << "\n";
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
				hoursLeft = hoursLeft - 1;
				system("CLS");
				//questioning stage
				QuestioningStage();
				break;
			}
			case 4:
			{
				hoursLeft = hoursLeft - 1;
				//Back out of questioning
				system("CLS");
				isChoosingQ = false;
				break;
			}
			default:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
				cout << "That is not a legal input.\n";
				break;
			}
		}
	}
	isChoosingQ = true;
}

void CaseOne::CheckEmotion()
{
	hoursLeft = hoursLeft - 1;
	SuspectPool::GetInstance()->GetSuspectIterator()->GetEmotion();
}

void CaseOne::Accuse()
{
	while (isChoosingA)
	{
		cout << "\t\t\t\t\t\t" << hoursLeft << "\n";
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
				hoursLeft = hoursLeft - 1;
				system("CLS");
				//Accusation stage
				break;
			}
			case 4:
			{
				hoursLeft = hoursLeft - 1;
				//Back out of accusation
				system("CLS");
				isChoosingA = false;
				break;
			}
			default:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
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
		cout << "\t\t\t\t\t\t" << hoursLeft << "\n";
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
				hoursLeft = hoursLeft - 1;
				system("CLS");
				//Solving stage
				break;
			}
			case 4:
			{
				hoursLeft = hoursLeft - 1;
				//Back out of solving.
				system("CLS");
				isChoosingS = false;
				break;
			}
			default:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
				cout << "That is not a legal input.\n";
				break;
			}
		}
	}
	isChoosingS = true;
}

void CaseOne::QuestioningStage()
{
	while (isQuestioning)
	{
		cout << "\t\t\t\t\t\t" << hoursLeft << "\n";
		cout << "\n\n\n";
		SuspectPool::GetInstance()->GetSuspectIterator()->SuspectDialogue();
		cout << "\t\t\tWhat would you like to do?\n\n";
		cout << "\t\t\tAccuse suspect of being a liar = Press 1\n";
		cout << "\t\t\tBelieve their story = Press 2\n";
		cout << "\t\t\tContinue With Case = Press 3\n";
		cout << "\n";
		cin >> qOption;

		switch (qOption)
		{
			case 1:
			{
				system("CLS");
				AccusationStage();
				break;
			}
			case 2:
			{
				system("CLS");
				break;
			}
			case 3:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
				isQuestioning = false;
				break;
			}
			default:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
				cout << "That is not a legal input.\n";
				break;
			}
		}
	}
	isQuestioning = true;
}

void CaseOne::AccusationStage()
{
}

void CaseOne::SolvingStage()
{
}

CaseOne::CaseOne()
{}

CaseOne::~CaseOne()
{}
