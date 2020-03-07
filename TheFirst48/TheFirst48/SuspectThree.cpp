#include "SuspectThree.h"

void SuspectThree::EmotionDialogue()
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

SuspectThree::SuspectThree()
{
	name = "Michelle";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
	}
}

SuspectThree::~SuspectThree()
{
}

void SuspectThree::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectThree::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectThree::GetPreviousEmotion()
{
	cout << "\t\t\t" << previousEmotion << "\n\n" << endl;
}

void SuspectThree::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
}

void SuspectThree::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectThree::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectThree::GetIsLiar()
{
	return isLiar;
}
bool SuspectThree::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectThree::GetIsKiller()
{
	return isKiller;
}
bool SuspectThree::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectThree::SuspectDialogue()
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

void SuspectThree::NeutralDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectThree::LiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectThree::AccusedDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
	SetEmotion(ANGRY);
}

void SuspectThree::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
	SetEmotion(SCARED);
}

void SuspectThree::KillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectThree::NotKillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}
