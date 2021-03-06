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
	SuspectPool::GetInstance()->GetSuspectIterator()->SetCurrentCase(Ecase::Two);
	SuspectPool::GetInstance()->ChooseCulprits();
	while (isOnCase)
	{
		if (!hoursLeft <= 0)
		{
			cout << "\n";
			cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
			cout << "\n\n\n";
			cout << "\t\t\t What option would you like to pursue\n";
			cout << "\n\n";
			cout << "\t\t\tQuestion Suspect = Press 1\n";
			cout << "\t\t\tAccuse Suspect = Press 2\n";
			cout << "\t\t\tSolve the case = Press 3\n";
			cout << "\t\t\tQuit to Main Menu = Press 4\n\n";
			cout << "\t\t\tOption: ";
			cin >> mOption;

			switch (mOption)
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
		else if (hoursLeft <= 0)
		{
			GameOverDialogue();
			isOnCase = false;
		}
	}
	isOnCase = true;
}

void CaseTwo::QuestionSuspect()
{
	while (isChoosingQ)
	{
		if (hoursLeft <= 0)
		{
			GameOverDialogue();
			isChoosingQ = false;
			isOnCase = false;
		}
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
		//cin.clear();

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
		if (hoursLeft <= 0)
		{
			GameOverDialogue();
			isChoosingA = false;
			isOnCase = false;
		}
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
		//cin.clear();

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
				AccusationStage();
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
		if (hoursLeft <= 0)
		{
			GameOverDialogue();
			isChoosingS = false;
			isOnCase = false;
		}
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
		//cin.clear();

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
				SolvingStage();
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
		if (hoursLeft <= 0)
		{
			GameOverDialogue();
			isQuestioning = false;
			isOnCase = false;
		}
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
		//cin.clear();

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
		if (hoursLeft <= 0)
		{
			GameOverDialogue();
			isAccusing = false;
			isOnCase = false;
		}
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
		//cin.clear();

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
}

CaseTwo::~CaseTwo()
{}
