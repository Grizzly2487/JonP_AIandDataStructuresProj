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

Emotions Suspects::GetEmotion()
{
	return currentEmotion;
}

Emotions Suspects::GetPreviousEmotion()
{
	return previousEmotion;
}

string Suspects::GetName()
{
	return name;
}

string Suspects::SetName(string newName)
{
	name = newName;
	return name;
}

bool Suspects::GetIsLiar()
{
	return isLiar;
}

bool Suspects::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}

bool Suspects::GetIsKiller()
{
	return isKiller;
}

bool Suspects::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

Emotions Suspects::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

Emotions SuspectTwo::GetEmotion()
{
	return Emotions();
}

Emotions SuspectTwo::SetEmotion(Emotions changeEmotion)
{
	return Emotions();
}

Emotions SuspectTwo::GetPreviousEmotion()
{
	return Emotions();
}

string SuspectTwo::GetName()
{
	return string();
}

string SuspectTwo::SetName(string newName)
{
	return string();
}

bool SuspectTwo::GetIsLiar()
{
	return false;
}

bool SuspectTwo::SetIsLiar(bool changeState)
{
	return false;
}

bool SuspectTwo::GetIsKiller()
{
	return false;
}

bool SuspectTwo::SetIsKiller(bool newKiller)
{
	return false;
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
