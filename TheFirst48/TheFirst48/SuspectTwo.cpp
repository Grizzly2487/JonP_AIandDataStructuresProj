#include "SuspectTwo.h"

void SuspectTwo::EmotionDialogue()
{
}

SuspectTwo::SuspectTwo()
{
	name = "Gavin";
}

SuspectTwo::~SuspectTwo()
{
}

Emotions SuspectTwo::GetEmotion()
{
	return currentEmotion;
}

Emotions SuspectTwo::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

Emotions SuspectTwo::GetPreviousEmotion()
{
	return previousEmotion;
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
	if (isLiar)
	{
		LiarDialogue();
	}
	else if (!isLiar)
	{
		NeutralDialogue();
	}
}

void SuspectTwo::NeutralDialogue()
{
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectTwo::LiarDialogue()
{
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectTwo::AccusedDialogue()
{
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
}

void SuspectTwo::AccusedLiarDialogue()
{
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
}

void SuspectTwo::KillerDialogue()
{
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectTwo::NotKillerDialogue()
{
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}
