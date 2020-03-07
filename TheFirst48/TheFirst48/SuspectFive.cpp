#include "SuspectFive.h"

void SuspectFive::EmotionDialogue()
{
	if (currentEmotion == NEUTRAL)
	{
		cout << "\n\n";
		cout << "\t\t\tEmotion: Feeling Neutral.\n";
	}
	else if (currentEmotion == ANXIOUS)
	{
		cout << "\n\n";
		cout << "\t\t\tEmotion: Feeling Anxious.\n";
	}
	else if (currentEmotion == ANGRY)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Angry.\n";
	}
	else if (currentEmotion == SCARED)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Scared.\n";
	}
}

SuspectFive::SuspectFive()
{
	name = "Mike";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
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

void SuspectFive::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
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
	SetEmotion(ANGRY);
}

void SuspectFive::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
	SetEmotion(SCARED);
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
