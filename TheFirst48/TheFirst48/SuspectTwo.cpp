#include "SuspectTwo.h"

void SuspectTwo::EmotionDialogue()
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

SuspectTwo::SuspectTwo()
{
	name = "Gavin";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
	}
}

SuspectTwo::~SuspectTwo()
{
}

void SuspectTwo::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectTwo::SetEmotion(Emotions changeEmotion)
{
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectTwo::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
}

void SuspectTwo::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectTwo::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectTwo::GetIsLiar()
{
	return isLiar;
}
bool SuspectTwo::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectTwo::GetIsKiller()
{
	return isKiller;
}
bool SuspectTwo::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectTwo::SuspectDialogue()
{
	if (GetIsLiar())
	{
		LiarDialogue();
	}
	else
	{
		NeutralDialogue();
	}
}

void SuspectTwo::NeutralDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was by the band the whole time, they will say so aswell.\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI'm a close friend of the deceased.\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tPurple...Red...Green...Yellow...Purple...\n\n";
	}
}

void SuspectTwo::LiarDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was dancing with Steve.\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tThis is all news to me I just got here not long ago...I was late.\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI didnt see anything.\n\n";
	}
}

void SuspectTwo::AccusedDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	SetEmotion(ANGRY);
}

void SuspectTwo::AccusedLiarDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	SetEmotion(SCARED);
}

void SuspectTwo::KillerDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
}

void SuspectTwo::NotKillerDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
}
