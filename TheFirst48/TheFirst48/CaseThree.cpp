#include "CaseThree.h"

void CaseThree::CaseDialogue()
{
	cout << "\t\t\t ___________________________\n";
	cout << "\t\t\t|Insert Case 3 Dialogue Here|\n\n\n"; //have the 3 \n on the last line of dialogue to create the space between the text and choice menu
}

void CaseThree::SolvedDialogue()
{
}

void CaseThree::ChooseCulprits()
{
}


void CaseThree::StartCase()
{
	while (isOnCase)
	{
		cout << "\n\n\n";
		cout << "\t\t\t What option would you like to pursue\n";
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
			QuestionSuspect();
			break;
		}
		case 2:
		{
			CheckEmotion();
			break;
		}
		case 3:
		{
			Accuse();
			break;
		}
		case 4:
		{
			SolveCase();
			break;
		}
		case 5:
		{
			isOnCase = false;
			break;
		}
		default:
		{
			cout << "That is not a legal input.\n";
			break;
		}
		}

	}
}

void CaseThree::QuestionSuspect()
{
}

void CaseThree::CheckEmotion()
{
}

void CaseThree::Accuse()
{
}

void CaseThree::SolveCase()
{
}

void CaseThree::QuestioningStage()
{
}

void CaseThree::AccusationStage()
{
}

void CaseThree::SolvingStage()
{
}

CaseThree::CaseThree()
{
}

CaseThree::~CaseThree()
{
}
