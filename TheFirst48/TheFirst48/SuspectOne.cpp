#include "SuspectOne.h"

void SuspectOne::EmotionDialogue()
{
}

SuspectOne::SuspectOne()
{
	name = "Steve";
}

SuspectOne::~SuspectOne()
{}

Emotions SuspectOne::GetEmotion()
{
	return currentEmotion;
}

Emotions SuspectOne::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

Emotions SuspectOne::GetPreviousEmotion()
{
	return previousEmotion;
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
	if (isLiar)
	{
		LiarDialogue();
	}
	else if (!isLiar)
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
}

void SuspectOne::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
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