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
}

void SuspectThree::NeutralDialogue()
{
}

void SuspectThree::LiarDialogue()
{
}

void SuspectThree::AccusedDialogue()
{
}

void SuspectThree::AccusedLiarDialogue()
{
}

void SuspectThree::KillerDialogue()
{
}

void SuspectThree::NotKillerDialogue()
{
}
