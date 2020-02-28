#include "Suspects.h"

void Suspects::GetEmotion()
{
	cout << currentEmotion << endl;
}

void Suspects::GetPreviousEmotion()
{
	cout << previousEmotion << endl;
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
