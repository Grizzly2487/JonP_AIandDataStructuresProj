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

Emotions SuspectFive::GetEmotion()
{
	return Emotions();
}

Emotions SuspectFive::SetEmotion(Emotions changeEmotion)
{
	return Emotions();
}

Emotions SuspectFive::GetPreviousEmotion()
{
	return Emotions();
}

string SuspectFive::GetName()
{
	return string();
}

string SuspectFive::SetName(string newName)
{
	return string();
}

bool SuspectFive::GetIsLiar()
{
	return false;
}

bool SuspectFive::SetIsLiar(bool changeState)
{
	return false;
}

bool SuspectFive::GetIsKiller()
{
	return false;
}

bool SuspectFive::SetIsKiller(bool newKiller)
{
	return false;
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
