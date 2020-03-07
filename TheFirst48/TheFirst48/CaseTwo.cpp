#include "CaseTwo.h"

void CaseTwo::CaseDialogue()
{
	cout << "\t\___________________________________________________________________________________________________________\n";
	cout << "\t||It was the worst day ever..thunderstorm was rolling in and the wind was blowing.The lightning and thunder||\n";
	cout << "\t||were off in the distance, but the rain was coming.The funeral had just finished up and the casket was on ||\n";
	cout << "\t||the way out the door.As the doors opened,a ladies shrill scream with thunder pierces the air.A man's body||\n";
	cout << "\t||was laying there covered in stab wounds and a note that said ~I KNOW WHAT YOU DID~ written on it.........||\n\n\n"; //have the 3 \n on the last line of dialogue to create the space between the text and choice menu
}

void CaseTwo::SolvedDialogue()
{
	cout << "\t\t\tThe Case is Solved!\n\n";
	isOnCase = false;
}

void CaseTwo::GameOverDialogue()
{
	cout << "\t\t\tYou Died and the Killer got away...\n\n";
	isOnCase = false;
}

void CaseTwo::StartCase()
{
	SuspectPool::GetInstance()->ChooseCulprits();
	while (isOnCase)
	{
		cout << "\n";
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
		cout << "\n\n\n";
		cout << "\t\t\t What option would you like to pursue\n";
		cout << "\n\n";
		cout << "\t\t\tQuestion Suspect = Press 1\n";
		cout << "\t\t\tCheck Emotion of Suspect = Press 2\n";
		cout << "\t\t\tAccuse Suspect = Press 3\n";
		cout << "\t\t\tSolve the case = Press 4\n\n";
		cout << "\t\t\tQuit to Main Menu = Press 5\n\n";
		cout << "\t\t\tOption: ";
		cin >> mOption;

		switch (mOption)
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
	while (isChoosingQ)
	{
		cout << "\n";
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
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

void CaseTwo::CheckEmotion()
{
	hoursLeft = hoursLeft - 1;
	SuspectPool::GetInstance()->GetSuspectIterator()->EmotionDialogue();
}

void CaseTwo::Accuse()
{
	while (isChoosingA)
	{
		cout << "\n";
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
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

void CaseTwo::SolveCase()
{
	while (isChoosingS)
	{
		cout << "\n";
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
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

void CaseTwo::QuestioningStage()
{
	while (isQuestioning)
	{
		cout << "\n";
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
		cout << "\n\n\n";
		SuspectPool::GetInstance()->GetSuspectIterator()->SuspectDialogue();
		cout << "\t\t\tWhat would you like to do?\n\n";
		cout << "\t\t\tAccuse suspect of being a liar = Press 1\n";
		cout << "\t\t\tBelieve their story = Press 2\n";
		cout << "\t\t\tCheck emotion of suspect = Press 3\n";
		cout << "\t\t\tContinue With Case = Press 4\n";
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
			system("CLS");
			CheckEmotion();
			break;
		}
		case 4:
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

void CaseTwo::AccusationStage()
{
	while (isAccusing)
	{
		cout << "\n";
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
		cout << "\n\n\n";
		if (!SuspectPool::GetInstance()->GetSuspectIterator()->GetIsLiar())
		{
			hoursLeft = hoursLeft - 6;
			system("CLS");
			SuspectPool::GetInstance()->GetSuspectIterator()->AccusedDialogue();
			break;
		}
		else
		{
			system("CLS");
			SuspectPool::GetInstance()->GetSuspectIterator()->AccusedLiarDialogue();
			break;
		}
		cout << "\t\t\tContinue With Case = Press 1\n";
		cout << "\n";
		cin >> aOption;

		switch (aOption)
		{
		case 1:
		{
			hoursLeft = hoursLeft - 1;
			system("CLS");
			isAccusing = false;
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
	isAccusing = true;
}

void CaseTwo::SolvingStage()
{
	cout << "\n";
	cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
	cout << "\n\n\n";
	if (!SuspectPool::GetInstance()->GetSuspectIterator()->GetIsKiller())
	{
		GameOverDialogue();
	}
	else
	{
		system("CLS");
		SuspectPool::GetInstance()->GetSuspectIterator()->KillerDialogue();
		cout << "\n\n";
		SolvedDialogue();
	}
}

int CaseTwo::GetHoursLeft()
{
	return hoursLeft;
}

CaseTwo::CaseTwo()
{
	SuspectPool::GetInstance()->ResetSuspects();
	SuspectPool::GetInstance()->GetSuspectIterator()->SetCurrentCase(Ecase::Two);
}

CaseTwo::~CaseTwo()
{}
