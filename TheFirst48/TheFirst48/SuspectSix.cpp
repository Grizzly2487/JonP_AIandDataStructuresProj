#include "SuspectSix.h"

void SuspectSix::EmotionDialogue()
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

SuspectSix::SuspectSix()
{
	name = "Jeff";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
	}
}

SuspectSix::~SuspectSix()
{
}

void SuspectSix::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectSix::SetEmotion(Emotions changeEmotion)
{
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectSix::GetPreviousEmotion()
{
	cout << "\t\t\t" << previousEmotion << "\n\n" << endl;
}

void SuspectSix::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
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
	if (GetIsLiar())
	{
		LiarDialogue();
	}
	else if (!GetIsLiar())
	{
		NeutralDialogue();
	}
}

void SuspectSix::NeutralDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNEUTRAL DIALOGUE\n\n";
}

void SuspectSix::LiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tLIAR DIALOGUE\n\n";
}

void SuspectSix::AccusedDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED DIALOGUE\n\n";
	SetEmotion(ANGRY);
}

void SuspectSix::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
	SetEmotion(SCARED);
}

void SuspectSix::KillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tKILLER DIALOGUE\n\n";
}

void SuspectSix::NotKillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tNOT KILLER DIALOGUE\n\n";
}
