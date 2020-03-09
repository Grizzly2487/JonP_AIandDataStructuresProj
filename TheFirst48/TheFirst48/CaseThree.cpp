#include "CaseThree.h"

void CaseThree::CaseDialogue()
{
	cout << "\t\___________________________________________________________________________________________________________\n";
	cout << "\t|||The night was dark with no moon or stars in sight.A group of teenagers headed out to a local farm to see|\n"; 
	cout << "\t|||what their friends told them.That there was weird lights in the sky and that they had to hurry or else  |\n";
	cout << "\t|||they may be gone before they got there.When the group arrived,the friends were just standing there and a|\n";
	cout << "\t|||crop circle with the body of one of their friends in the middle of it pale and naked with all clothes   |\n";//have the 3 \n on the last line of dialogue to create the space between the text and choice menu
	cout << "\t|||and hair removed from his body.The Group asked their friends what happened but none spoke...............|\n\n\n";
}

void CaseThree::SolvedDialogue()
{
	cout << "\t\t\tThe Case is Solved!\n\n";
	isOnCase = false;
}

void CaseThree::GameOverDialogue()
{
	cout << "\t\t\tYou Died and the Killer got away...\n\n";
	isOnCase = false;
}

void CaseThree::StartCase()
{	
	SuspectPool::GetInstance()->GetSuspectIterator()->SetCurrentCase(Ecase::Three);
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
			cin.clear();

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
		else if(hoursLeft <= 0)
		{
			GameOverDialogue();
			isOnCase = false;
		}
	}
	isOnCase = true;
}

void CaseThree::QuestionSuspect()
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
		cin.clear();

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

void CaseThree::CheckEmotion()
{
	hoursLeft = hoursLeft - 1;
	SuspectPool::GetInstance()->GetSuspectIterator()->EmotionDialogue();
}

void CaseThree::Accuse()
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
		cin.clear();

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

void CaseThree::SolveCase()
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
		cin.clear();

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

void CaseThree::QuestioningStage()
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
		cin.clear();

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

void CaseThree::AccusationStage()
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
		cin.clear();

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

void CaseThree::SolvingStage()
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

int CaseThree::GetHoursLeft()
{
	return hoursLeft;
}

CaseThree::CaseThree()
{
	SuspectPool::GetInstance()->ResetSuspects();
}

CaseThree::~CaseThree()
{}
