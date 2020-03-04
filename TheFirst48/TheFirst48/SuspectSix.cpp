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

Emotions SuspectSix::GetEmotion()
{
	return currentEmotion;
}

Emotions SuspectSix::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

Emotions SuspectSix::GetPreviousEmotion()
{
	return previousEmotion;
}
void SuspectSix::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectSix::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectSix::GetIsLiar()
{
	return isLiar;
}
bool SuspectSix::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectSix::GetIsKiller()
{
	return isKiller;
}
bool SuspectSix::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectSix::SuspectDialogue()
{
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
