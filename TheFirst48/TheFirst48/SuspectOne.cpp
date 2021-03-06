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
	else
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
		cout << "\n\n\n";
		cout << "\t\t\tI was a paul bearer at the funeral..\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI FEEL SICK...~Throws up~\n\n";
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
		cout << "\n\n\n";
		cout << "\t\t\tI was in the bathroom,tacos didn't sit right.\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI seen them! I seen the aliens kill him!!\n\n";
	}
}

void SuspectOne::AccusedDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	SetEmotion(ANGRY);
}

void SuspectOne::AccusedLiarDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	SetEmotion(SCARED);
}

void SuspectOne::KillerDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
}

void SuspectOne::NotKillerDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
}