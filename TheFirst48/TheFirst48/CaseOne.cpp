#include "CaseOne.h"

void CaseOne::CaseDialogue()
{
	cout << "\t\___________________________________________________________________________________________________________\n";
	cout << "\t|At a highschool reunion, where everyone dresses like it was the 20's everyone was having a grand soiree.|||\n"; //have the 3 \n on the last line of dialogue to create the space between the text and choice menu
	cout << "\t|everyone was having a grand soiree.The Punch bowl was spiked,and the floor was popping.Dresses and Suits|||\n";
	cout << "\t|swinging to the beat.When a blood curdling scream stops the music and the party to a dead stop. The body|||\n";
	cout << "\t|of one of the students is found in the main hall outside the auditorium everyone was just in............|||\n\n\n";
}

void CaseOne::SolvedDialogue()
{
	cout << "\n";
	cout << "\t\t\t|~|~|~|~|~|~|~|~|~|~|~|~|~|~|\n\n";
	cout << "\t\t\t|~|~|The Case is Solved!|~|~|\n\n";
	cout << "\t\t\t|~|~|~|~|~|~|~|~|~|~|~|~|~|~|\n\n";
}

void CaseOne::GameOverDialogue()
{
	cout << "\n";
	cout << "\t\t\t|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|\n\n";
	cout << "\t\t\t|~|~|You Died and the Killer got away...|~|~|\n\n";
	cout << "\t\t\t|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|\n\n";
}


void CaseOne::StartCase()
{
	SuspectPool::GetInstance()->ChooseCulprits();
	while (isOnCase)
	{
		cout << "\n";
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
		cout << "\n\n\n";
		cout << "\t\t\tWhat option would you like to pursue\n";
		cout << "\n\n";
		cout << "\t\t\tQuestion Suspect = Press 1\n";
		cout << "\t\t\tAccuse suspect of being a liar = Press 2\n";
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
	isOnCase = true;
}	

void CaseOne::QuestionSuspect()
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
		cout << "\t\t\tOption: ";
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
	SuspectPool::GetInstance()->GetSuspectIterator()->EmotionDialogue();
}

void CaseOne::Accuse()
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
		cout << "\t\t\tOption: ";
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
				//Accusing stage
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

void CaseOne::SolveCase()
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
		cout << "\t\t\tContinue With Case = Press 4\n\n";
		cout << "\t\t\tOption: ";
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
				SolvingStage();
				isChoosingS = false;
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
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
		cout << "\n\n\n";
		SuspectPool::GetInstance()->GetSuspectIterator()->SuspectDialogue();
		cout << "\t\t\tWhat would you like to do?\n\n";
		cout << "\t\t\tAccuse suspect of being a liar = Press 1\n";
		cout << "\t\t\tBelieve their story = Press 2\n";
		cout << "\t\t\tCheck emotion of suspect = Press 3\n";
		cout << "\t\t\tContinue With Case = Press 4\n\n";
		cout << "\t\t\tOption: ";
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
				while (isBelieving)
				{
					system("CLS");
					if (SuspectPool::GetInstance()->GetSuspectIterator()->GetIsLiar())
					{
						hoursLeft = hoursLeft + 1;
						cout << "\n\n";
						cout << "\t\t\tYou believe them, but they look shady...\n";
					}
					else if (!SuspectPool::GetInstance()->GetSuspectIterator()->GetIsLiar())
					{
						cout << "\n\n";
						cout << "\t\t\tYou believe them, and they look legit.\n";
					}
					cout << "\t\t\tPress 1 to continue:";
					cin >> qOption2;

					switch (qOption2)
					{
						case 1:
						{
							hoursLeft = hoursLeft - 1;
							system("CLS");
							isBelieving = false;
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
				isBelieving = true;
				isQuestioning = false;
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

void CaseOne::AccusationStage()
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
		}
		else
		{
			system("CLS");
			SuspectPool::GetInstance()->GetSuspectIterator()->AccusedLiarDialogue();
		}
		cout << "\n";
		cout << "\t\t\tPress 1 to Continue: ";
		cin >> aOption;

		switch (aOption)
		{
			case 1:
			{
				hoursLeft = hoursLeft - 1;
				system("CLS");
				isAccusing = false;
				isQuestioning = false;
				isChoosingA = false;
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
		isChoosingA = true;
		isChoosingQ = true;
	}
	isAccusing= true;
}

void CaseOne::SolvingStage()
{
		cout << "\n";
		cout << "\t\t\t\t\t\t\tHours Left: " << hoursLeft << "\n";
		cout << "\n\n\n";
		if (!SuspectPool::GetInstance()->GetSuspectIterator()->GetIsKiller())
		{
			hoursLeft = 48;
			system("CLS");
			GameOverDialogue();
			isAccusing = true;
			isQuestioning = true;
			isChoosingA = true;
			isChoosingQ = true;
			isChoosingS = true;
			isBelieving = true;
			isOnCase = false;
		}
		else
		{
			hoursLeft = 48;
			system("CLS");
			SuspectPool::GetInstance()->GetSuspectIterator()->KillerDialogue();
			cout << "\n\n";
			SolvedDialogue();
			isAccusing = true;
			isQuestioning = true;
			isChoosingA = true;
			isChoosingQ = true;
			isChoosingS = true;
			isBelieving = true;
			isOnCase = false;
		}
}

int CaseOne::GetHoursLeft()
{
	return hoursLeft;
}

CaseOne::CaseOne()
{
	SuspectPool::GetInstance()->ResetSuspects();
	//SuspectPool::GetInstance()->GetSuspectIterator()->SetCurrentCase(Ecase::One);

}

CaseOne::~CaseOne()
{}
