#include "SuspectFive.h"

void SuspectFive::EmotionDialogue()
{
	if (NEUTRAL)
	{
		cout << "\n\n";
		cout << "\t\t\tEmotion: Feeling Neutral.\n";
	}
	else if (ANXIOUS)
	{
		cout << "\n\n";
		cout << "\t\t\tEmotion: Feeling Anxious.\n";
	}
	else if (ANGRY)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Angry.\n";
	}
	else if (SCARED)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Scared.\n";
	}
}

SuspectFive::SuspectFive()
{
	name = "Mike";
	currentEmotion = NEUTRAL;
	if (GetIsLiar() || GetIsKiller())
	{
		currentEmotion = ANXIOUS;
	}
}

SuspectFive::~SuspectFive()
{
}

void SuspectFive::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectFive::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectFive::GetPreviousEmotion()
{
	cout << "\t\t\t" << previousEmotion << "\n\n" << endl;
}


void SuspectFive::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}

string SuspectFive::SetName(string newName)
{
	name = newName;
	return name;
}

bool SuspectFive::GetIsLiar()
{
	return isLiar;
}

bool SuspectFive::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}

bool SuspectFive::GetIsKiller()
{
	return isKiller;
}

bool SuspectFive::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectFive::SuspectDialogue()
{
	if (GetIsLiar())
	{
		LiarDialogue();
	}
	else if (!GetIsLiar())
	{
		NeutralDialogue();
	}
}

void SuspectFive::NeutralDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectFive::LiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectFive::AccusedDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
	currentEmotion = ANGRY;
}

void SuspectFive::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
	currentEmotion = SCARED;
}

void SuspectFive::KillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectFive::NotKillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}
