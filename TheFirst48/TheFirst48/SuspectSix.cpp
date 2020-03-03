#include "SuspectSix.h"

void SuspectSix::EmotionDialogue()
{
}

SuspectSix::SuspectSix()
{
	name = "Jeff";
}

SuspectSix::~SuspectSix()
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

Emotions SuspectSix::GetEmotion()
{
	return Emotions();
}

Emotions SuspectSix::SetEmotion(Emotions changeEmotion)
{
	return Emotions();
}

Emotions SuspectSix::GetPreviousEmotion()
{
	return Emotions();
}

string SuspectSix::GetName()
{
	return string();
}

string SuspectSix::SetName(string newName)
{
	return string();
}

bool SuspectSix::GetIsLiar()
{
	return false;
}

bool SuspectSix::SetIsLiar(bool changeState)
{
	return false;
}

bool SuspectSix::GetIsKiller()
{
	return false;
}

bool SuspectSix::SetIsKiller(bool newKiller)
{
	return false;
}

void SuspectSix::NeutralDialogue()
{
}

void SuspectSix::LiarDialogue()
{
}

void SuspectSix::AccusedDialogue()
{
}

void SuspectSix::AccusedLiarDialogue()
{
}

void SuspectSix::KillerDialogue()
{
}

void SuspectSix::NotKillerDialogue()
{
}
