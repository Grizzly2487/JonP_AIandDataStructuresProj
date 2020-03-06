#include "SuspectOne.h"

void SuspectOne::EmotionDialogue()
{
	if (NEUTRAL)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Neutral.\n";
	}
	else if (ANXIOUS)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Anxious.\n";
	}
	else if (ANGRY)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Angry.\n";
	}
	else if (SCARED)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Scared.\n";
	}
}

SuspectOne::SuspectOne()
{
	name = "Steve";
	currentEmotion = NEUTRAL;
	if (GetIsLiar() || GetIsKiller())
	{
		currentEmotion = ANXIOUS;
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
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectOne::GetPreviousEmotion()
{
	cout << "\t\t\t" << previousEmotion << "\n\n" << endl;
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
	cout << "\n\n\n";
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectOne::LiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectOne::AccusedDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
	currentEmotion = ANGRY;
}

void SuspectOne::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
	currentEmotion = SCARED;
}

void SuspectOne::KillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectOne::NotKillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}