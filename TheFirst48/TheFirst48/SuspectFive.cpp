#include "SuspectFive.h"

void SuspectFive::EmotionDialogue()
{
	if (currentEmotion == NEUTRAL)
	{
		cout << "\n\n";
		cout << "\t\t\tEmotion: Feeling Neutral.\n";
	}
	else if (currentEmotion == ANXIOUS)
	{
		cout << "\n\n";
		cout << "\t\t\tEmotion: Feeling Anxious.\n";
	}
	else if (currentEmotion == ANGRY)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Angry.\n";
	}
	else if (currentEmotion == SCARED)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Scared.\n";
	}
}

SuspectFive::SuspectFive()
{
	name = "Mike";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
	}
}

SuspectFive::~SuspectFive()
{
}

void SuspectFive::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectFive::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectFive::GetPreviousEmotion()
{
	cout << "\t\t\t" << previousEmotion << "\n\n" << endl;
}

void SuspectFive::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
}


void SuspectFive::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}

string SuspectFive::SetName(string newName)
{
	name = newName;
	return name;
}

bool SuspectFive::GetIsLiar()
{
	return isLiar;
}

bool SuspectFive::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}

bool SuspectFive::GetIsKiller()
{
	return isKiller;
}

bool SuspectFive::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectFive::SuspectDialogue()
{
	if (GetIsLiar())
	{
		LiarDialogue();
	}
	else if (!GetIsLiar())
	{
		NeutralDialogue();
	}
}

void SuspectFive::NeutralDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tI was dancing with Jay.\n\n";
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{

	//}
	//else if (currentCase == Ecase::Three)
	//{

	//}
}

void SuspectFive::LiarDialogue()
{	
	cout << "\n\n\n";
	cout << "\t\t\tI was under a table with Jeff.\n\n";
	//if (currentCase == Ecase::One)
	//{
	//
	//}
	//else if (currentCase == Ecase::Two)
	//{

	//}
	//else if (currentCase == Ecase::Three)
	//{

	//}
}

void SuspectFive::AccusedDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	SetEmotion(ANGRY);
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	//	SetEmotion(ANGRY);
	//}
	//else if (currentCase == Ecase::Three)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	//	SetEmotion(ANGRY);
	//}
}

void SuspectFive::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	SetEmotion(SCARED);
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	//	SetEmotion(SCARED);
	//}
	//else if (currentCase == Ecase::Three)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	//	SetEmotion(SCARED);
	//}
}

void SuspectFive::KillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	//}
	//else if (currentCase == Ecase::Three)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	//}
}

void SuspectFive::NotKillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	//}
	//else if (currentCase == Ecase::Three)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	//}
}
