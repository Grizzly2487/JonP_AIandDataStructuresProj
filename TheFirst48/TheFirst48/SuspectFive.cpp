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
}

void SuspectFive::NeutralDialogue()
{
}

void SuspectFive::LiarDialogue()
{
}

void SuspectFive::AccusedDialogue()
{
}

void SuspectFive::AccusedLiarDialogue()
{
}

void SuspectFive::KillerDialogue()
{
}

void SuspectFive::NotKillerDialogue()
{
}
