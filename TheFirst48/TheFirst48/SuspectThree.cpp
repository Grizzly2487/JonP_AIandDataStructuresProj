#include "SuspectThree.h"

void SuspectThree::EmotionDialogue()
{
}

SuspectThree::SuspectThree()
{
	name = "Michelle";

}

SuspectThree::~SuspectThree()
{
}

Emotions SuspectThree::GetEmotion()
{
	return currentEmotion;
}

Emotions SuspectThree::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

Emotions SuspectThree::GetPreviousEmotion()
{
	return previousEmotion;
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
	if (isLiar)
	{
		LiarDialogue();
	}
	else if (!isLiar)
	{
		NeutralDialogue();
	}
}

void SuspectThree::NeutralDialogue()
{
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectThree::LiarDialogue()
{
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectThree::AccusedDialogue()
{
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
}

void SuspectThree::AccusedLiarDialogue()
{
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
}

void SuspectThree::KillerDialogue()
{
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectThree::NotKillerDialogue()
{
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}
