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
	return string();
}

string Suspects::SetName(string newName)
{
	return string();
}

bool Suspects::GetIsLiar()
{
	return false;
}

bool Suspects::SetIsLiar(bool changeState)
{
	return false;
}

bool Suspects::GetIsKiller()
{
	return false;
}

bool Suspects::SetIsKiller(bool newKiller)
{
	return false;
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
{
}

Suspects::~Suspects()
{
}
