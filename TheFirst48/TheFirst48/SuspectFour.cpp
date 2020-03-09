#include "SuspectFour.h"

void SuspectFour::EmotionDialogue()
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

SuspectFour::SuspectFour()
{
	name = "Jay";
	if (GetIsLiar() || GetIsKiller())
	{
		SetEmotion(ANXIOUS);
	}
	else
	{
		SetEmotion(NEUTRAL);
	}
}

SuspectFour::~SuspectFour()
{
}

void SuspectFour::GetEmotion()
{
	cout << "\t\t\t" << currentEmotion << "\n\n" << endl;
}

Emotions SuspectFour::SetEmotion(Emotions changeEmotion)
{
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectFour::ResetSuspect()
{
	SetIsLiar(false);
	SetIsKiller(false);
	SetEmotion(NEUTRAL);
}

void SuspectFour::GetName()
{
	cout << "\t\t\t" << name << "\n" << endl;
}
string SuspectFour::SetName(string newName)
{
	name = newName;
	return name;
}
bool SuspectFour::GetIsLiar()
{
	return isLiar;
}
bool SuspectFour::SetIsLiar(bool changeState)
{
	isLiar = changeState;
	return isLiar;
}
bool SuspectFour::GetIsKiller()
{
	return isKiller;
}
bool SuspectFour::SetIsKiller(bool newKiller)
{
	isKiller = newKiller;
	return isKiller;
}

void SuspectFour::SuspectDialogue()
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

void SuspectFour::NeutralDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was dancing with Mike.\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was a paul bearer with mike..\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tALIENS!!!IT WAS ALIENS!!!\n\n";
	}
}

void SuspectFour::LiarDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI have no idea whats going on. I'm not supposed to be here, i'm just a pizza delivery guy!\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI arrived late to the funeral and found this.\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI couldnt see anything because it was to dark.\n\n";
	}
}

void SuspectFour::AccusedDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	SetEmotion(ANGRY);
}

void SuspectFour::AccusedLiarDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	SetEmotion(SCARED);
}

void SuspectFour::KillerDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
}

void SuspectFour::NotKillerDialogue()
{
	system("CLS");
	cout << "\n\n\n";
	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
}