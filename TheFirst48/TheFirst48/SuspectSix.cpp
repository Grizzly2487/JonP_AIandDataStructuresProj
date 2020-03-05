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
	if (isLiar)
	{
		LiarDialogue();
	}
	else if (!isLiar)
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
}

void SuspectSix::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tACCUSED LIAR DIALOGUE\n\n";
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
