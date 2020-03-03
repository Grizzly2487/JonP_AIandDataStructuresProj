#include "Suspects.h"

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



void Suspects::EmotionDialogue()
{
	if (NEUTRAL)
	{
		cout << "NEUTRAL\n";
	}
	else if (ANXIOUS)
	{
		cout << "ANXIOUS\n";
	}
	else if (ANGRY)
	{
		cout << "ANGRY\n";
	}
	else if (SAD)
	{
		cout << "SAD\n";
	}
	else if (SCARED)
	{
		cout << "SCARED\n";
	}
}

Suspects::Suspects()
{}

Suspects::~Suspects()
{}

void Suspects::NeutralDialogue()
{}

void Suspects::LiarDialogue()
{}

void Suspects::AccusedDialogue()
{}

void Suspects::AccusedLiarDialogue()
{}

void Suspects::KillerDialogue()
{}

void Suspects::NotKillerDialogue()
{}
