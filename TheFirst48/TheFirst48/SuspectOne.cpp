#include "SuspectOne.h"

void SuspectOne::EmotionDialogue()
{
	if (currentEmotion == NEUTRAL)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Neutral.\n";
	}
	else if (currentEmotion == ANXIOUS)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Anxious.\n";
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

SuspectOne::SuspectOne()
{
	name = "Steve";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
	}
}

SuspectOne::~SuspectOne()
{}

void SuspectOne::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectOne::SetEmotion(Emotions changeEmotion)
{
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectOne::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
}

void SuspectOne::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectOne::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectOne::GetIsLiar()
{
	return isLiar;
}
bool SuspectOne::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectOne::GetIsKiller()
{
	return isKiller;
}
bool SuspectOne::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectOne::SuspectDialogue()
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

void SuspectOne::NeutralDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tIm to drunk to function...coudznt have beens me...\n\n";
	}
	else if (currentCase == Ecase::Two)
	{

	}
	else if (currentCase == Ecase::Three)
	{

	}
}

void SuspectOne::LiarDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was dancing with Michelle.\n\n";
	}
	else if (currentCase == Ecase::Two)
	{

	}
	else if (currentCase == Ecase::Three)
	{

	}
}

void SuspectOne::AccusedDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
		SetEmotion(ANGRY);
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
		SetEmotion(ANGRY);
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
		SetEmotion(ANGRY);
	}
}

void SuspectOne::AccusedLiarDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
		SetEmotion(SCARED);
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
		SetEmotion(SCARED);
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
		SetEmotion(SCARED);
	}
}

void SuspectOne::KillerDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	}
}

void SuspectOne::NotKillerDialogue()
{

	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	}
}