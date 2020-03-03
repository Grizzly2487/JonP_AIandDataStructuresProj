#include "CaseOne.h"

void CaseOne::CaseDialogue()
{
	cout << "\t\t\t ___________________________\n";
	cout << "\t\t\t|Insert Case 1 Dialogue Here|\n\n\n"; //have the 3 \n on the last line of dialogue to create the space between the text and choice menu
}

void CaseOne::SolvedDialogue()
{
	cout << "Insert Solved Dialogue Here\n";
}

void CaseOne::NeutralDialogue()
{
}

void CaseOne::LiarDialogue()
{
}

void CaseOne::AccusedDialogue()
{
}

void CaseOne::AccusedLiarDialogue()
{
}

void CaseOne::KillerDialogue()
{
}

void CaseOne::NotKillerDialogue()
{
}

void CaseOne::StartCase()
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

void CaseOne::QuestionSuspect()
{
	while (isChoosingQ)
	{
		suspectPool->GetSuspectIterator()->CaseDialogue();
		cout << "Which suspect would you like to question?\n";
		cout << "Cycle Left = Press 1\n";
		cout << "Cycle Right = Press 2\n";
		cout << "Stop Questioning = Press 3\n";
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

void CaseOne::CheckEmotion()
{
}

void CaseOne::Accuse()
{
}

void CaseOne::SolveCase()
{
}

CaseOne::CaseOne()
{

}

CaseOne::~CaseOne()
{
}
