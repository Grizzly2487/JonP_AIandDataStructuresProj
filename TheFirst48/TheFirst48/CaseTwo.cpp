#include "CaseTwo.h"

void CaseTwo::CaseDialogue()
{
	cout << "\t\t\t ___________________________\n";
	cout << "\t\t\t|Insert Case 2 Dialogue Here|\n\n\n"; //have the 3 \n on the last line of dialogue to create the space between the text and choice menu
}


void CaseTwo::StartCase()
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

void CaseTwo::QuestionSuspect()
{
}

void CaseTwo::CheckEmotion()
{
}

void CaseTwo::Accuse()
{
}

void CaseTwo::SolveCase()
{
}

CaseTwo::CaseTwo()
{

}

CaseTwo::~CaseTwo()
{
}
