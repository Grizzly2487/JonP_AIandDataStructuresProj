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

Emotions SuspectFour::GetEmotion()
{
	return Emotions();
}

Emotions SuspectFour::SetEmotion(Emotions changeEmotion)
{
	return Emotions();
}

Emotions SuspectFour::GetPreviousEmotion()
{
	return Emotions();
}

string SuspectFour::GetName()
{
	return string();
}

string SuspectFour::SetName(string newName)
{
	return string();
}

bool SuspectFour::GetIsLiar()
{
	return false;
}

bool SuspectFour::SetIsLiar(bool changeState)
{
	return false;
}

bool SuspectFour::GetIsKiller()
{
	return false;
}

bool SuspectFour::SetIsKiller(bool newKiller)
{
	return false;
}

void SuspectFour::NeutralDialogue()
{
}

void SuspectFour::LiarDialogue()
{
}

void SuspectFour::AccusedDialogue()
{
}

void SuspectFour::AccusedLiarDialogue()
{
}

void SuspectFour::KillerDialogue()
{
}

void SuspectFour::NotKillerDialogue()
{
}
