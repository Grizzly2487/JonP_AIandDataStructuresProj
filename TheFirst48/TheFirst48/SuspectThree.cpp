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

Emotions SuspectThree::GetEmotion()
{
	return Emotions();
}

Emotions SuspectThree::SetEmotion(Emotions changeEmotion)
{
	return Emotions();
}

Emotions SuspectThree::GetPreviousEmotion()
{
	return Emotions();
}

string SuspectThree::GetName()
{
	return string();
}

string SuspectThree::SetName(string newName)
{
	return string();
}

bool SuspectThree::GetIsLiar()
{
	return false;
}

bool SuspectThree::SetIsLiar(bool changeState)
{
	return false;
}

bool SuspectThree::GetIsKiller()
{
	return false;
}

bool SuspectThree::SetIsKiller(bool newKiller)
{
	return false;
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
