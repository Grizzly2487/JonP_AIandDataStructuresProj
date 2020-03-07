#include "SuspectThree.h"

void SuspectThree::EmotionDialogue()
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

SuspectThree::SuspectThree()
{
	name = "Michelle";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
	}
}

SuspectThree::~SuspectThree()
{
}

void SuspectThree::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectThree::SetEmotion(Emotions changeEmotion)
{
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectThree::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
}

void SuspectThree::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectThree::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectThree::GetIsLiar()
{
	return isLiar;
}
bool SuspectThree::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectThree::GetIsKiller()
{
	return isKiller;
}
bool SuspectThree::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectThree::SuspectDialogue()
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

void SuspectThree::NeutralDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was throwing up in the bathroom...may I go yet? I don't feel well\n\n";
	}
	else if (currentCase == Ecase::Two)
	{

	}
	else if (currentCase == Ecase::Three)
	{

	}
}

void SuspectThree::LiarDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was dancing with Gavin.\n\n";
	}
	else if (currentCase == Ecase::Two)
	{

	}
	else if (currentCase == Ecase::Three)
	{

	}
}

void SuspectThree::AccusedDialogue()
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

void SuspectThree::AccusedLiarDialogue()
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

void SuspectThree::KillerDialogue()
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

void SuspectThree::NotKillerDialogue()
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
