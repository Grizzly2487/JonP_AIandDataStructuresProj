#include "SuspectOne.h"

void SuspectOne::EmotionDialogue()
{
}

SuspectOne::SuspectOne()
{
	name = "Steve";
}

SuspectOne::~SuspectOne()
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

Emotions SuspectOne::GetEmotion()
{
	return Emotions();
}

Emotions SuspectOne::SetEmotion(Emotions changeEmotion)
{
	return Emotions();
}

Emotions SuspectOne::GetPreviousEmotion()
{
	return Emotions();
}

string SuspectOne::GetName()
{
	return string();
}

string SuspectOne::SetName(string newName)
{
	return string();
}

bool SuspectOne::GetIsLiar()
{
	return false;
}

bool SuspectOne::SetIsLiar(bool changeState)
{
	return false;
}

bool SuspectOne::GetIsKiller()
{
	return false;
}

bool SuspectOne::SetIsKiller(bool newKiller)
{
	return false;
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
