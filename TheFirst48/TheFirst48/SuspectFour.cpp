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

Emotions SuspectFour::GetEmotion()
{
	return currentEmotion;
}

Emotions SuspectFour::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

Emotions SuspectFour::GetPreviousEmotion()
{
	return previousEmotion;
}
void SuspectFour::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectFour::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectFour::GetIsLiar()
{
	return isLiar;
}
bool SuspectFour::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectFour::GetIsKiller()
{
	return isKiller;
}
bool SuspectFour::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectFour::SuspectDialogue()
{
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