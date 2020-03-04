#include "SuspectFive.h"

void SuspectFive::EmotionDialogue()
{
}

SuspectFive::SuspectFive()
{
	name = "Mike";
}

SuspectFive::~SuspectFive()
{
}

Emotions SuspectFive::GetEmotion()
{
	return currentEmotion;
}

Emotions SuspectFive::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

Emotions SuspectFive::GetPreviousEmotion()
{
	return previousEmotion;
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
	if (isLiar)
	{
		LiarDialogue();
	}
	else if (!isLiar)
	{
		NeutralDialogue();
	}
}

void SuspectFive::NeutralDialogue()
{
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectFive::LiarDialogue()
{
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectFive::AccusedDialogue()
{
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
}

void SuspectFive::AccusedLiarDialogue()
{
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
}

void SuspectFive::KillerDialogue()
{
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectFive::NotKillerDialogue()
{
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}
