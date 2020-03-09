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
	currentEmotion = changeEmotion;
	return currentEmotion;
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
	else
	{
		NeutralDialogue();
	}
}

void SuspectFive::NeutralDialogue()
{
	if (currentCase == Ecase::One)
	{
		system("CLS");
		cout << "\n\n\n";
		cout << "\t\t\tI was dancing with Jay.\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		system("CLS");
		cout << "\n\n\n";
		cout << "\t\t\tI was a paul bearer in the funeral..\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		system("CLS");
		cout << "\n\n\n";
		cout << "\t\t\tI was watching the lights and next I know....~cries~\n\n";
	}
}

void SuspectFive::LiarDialogue()
{
	if (currentCase == Ecase::One)
	{
		system("CLS");
		cout << "\n\n\n";
		cout << "\t\t\tI was under a table with Jeff.\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		system("CLS");
		cout << "\n\n\n";
		cout << "\t\t\tI was having a smoke out back.\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		system("CLS");
		cout << "\n\n\n";
		cout << "\t\t\tI was watching the lights in the sky.\n\n";
	}
}

void SuspectFive::AccusedDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	SetEmotion(ANGRY);
}

void SuspectFive::AccusedLiarDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	SetEmotion(SCARED);
}

void SuspectFive::KillerDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
}

void SuspectFive::NotKillerDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
}
