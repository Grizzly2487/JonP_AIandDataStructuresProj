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
}

void SuspectTwo::NeutralDialogue()
{
}

void SuspectTwo::LiarDialogue()
{
}

void SuspectTwo::AccusedDialogue()
{
}

void SuspectTwo::AccusedLiarDialogue()
{
}

void SuspectTwo::KillerDialogue()
{
}

void SuspectTwo::NotKillerDialogue()
{
}
