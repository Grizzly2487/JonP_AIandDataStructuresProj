#include "SuspectFour.h"

void SuspectFour::EmotionDialogue()
{
}

SuspectFour::SuspectFour()
{
	name = "Jay";
}

SuspectFour::~SuspectFour()
{
}

Emotions SuspectFour::GetEmotion()
{
	return currentEmotion;
}

Emotions SuspectFour::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

Emotions SuspectFour::GetPreviousEmotion()
{
	return previousEmotion;
}
void SuspectFour::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectFour::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectFour::GetIsLiar()
{
	return isLiar;
}
bool SuspectFour::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectFour::GetIsKiller()
{
	return isKiller;
}
bool SuspectFour::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectFour::SuspectDialogue()
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

void SuspectFour::NeutralDialogue()
{
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectFour::LiarDialogue()
{
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectFour::AccusedDialogue()
{
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
}

void SuspectFour::AccusedLiarDialogue()
{
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
}

void SuspectFour::KillerDialogue()
{
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectFour::NotKillerDialogue()
{
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}