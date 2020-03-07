#include "SuspectTwo.h"

void SuspectTwo::EmotionDialogue()
{
	if (currentEmotion == NEUTRAL)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Neutral.\n";
	}
	else if (currentEmotion == ANXIOUS)
	{
		cout << "\n\n";
		cout << "\t\t\tFeeling Anxious.\n";
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

SuspectTwo::SuspectTwo()
{
	name = "Gavin";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
	}
}

SuspectTwo::~SuspectTwo()
{
}

void SuspectTwo::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectTwo::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectTwo::GetPreviousEmotion()
{
	cout << "\t\t\t" << previousEmotion << "\n\n" << endl;
}

void SuspectTwo::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
}

void SuspectTwo::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectTwo::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectTwo::GetIsLiar()
{
	return isLiar;
}
bool SuspectTwo::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectTwo::GetIsKiller()
{
	return isKiller;
}
bool SuspectTwo::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectTwo::SuspectDialogue()
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

void SuspectTwo::NeutralDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectTwo::LiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectTwo::AccusedDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
	SetEmotion(ANGRY);
}

void SuspectTwo::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
	SetEmotion(SCARED);
}

void SuspectTwo::KillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectTwo::NotKillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}
