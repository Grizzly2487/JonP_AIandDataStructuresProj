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
}

void SuspectOne::NeutralDialogue()
{
}

void SuspectOne::LiarDialogue()
{
}

void SuspectOne::AccusedDialogue()
{
}

void SuspectOne::AccusedLiarDialogue()
{
}

void SuspectOne::KillerDialogue()
{
}

void SuspectOne::NotKillerDialogue()
{
}
