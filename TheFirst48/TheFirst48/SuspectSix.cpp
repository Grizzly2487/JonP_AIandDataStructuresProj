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
	currentEmotion = changeEmotion;
	return currentEmotion;
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
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI have no idea whats going on. I'm not supposed to be here. I'm the pizza delivery guy!\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI'm a close friend of the deceased..\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tWHAT!? I CANT HEAR ANYTHING!!\n\n";
	}
}

void SuspectSix::LiarDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was under a table with mike.\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tI was a paul bearer with mike.\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tThere was a bright flash of light and all his clothes and hair burnt off.\n\n";
	}
}

void SuspectSix::AccusedDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
		SetEmotion(ANGRY);
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
		SetEmotion(ANGRY);
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
		SetEmotion(ANGRY);
	}
}

void SuspectSix::AccusedLiarDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
		SetEmotion(SCARED);
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
		SetEmotion(SCARED);
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
		SetEmotion(SCARED);
	}
}

void SuspectSix::KillerDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	}
}

void SuspectSix::NotKillerDialogue()
{
	if (currentCase == Ecase::One)
	{
		cout << "\n\n\n";
		cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	}
	else if (currentCase == Ecase::Two)
	{
		cout << "\n\n\n";
		cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	}
	else if (currentCase == Ecase::Three)
	{
		cout << "\n\n\n";
		cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	}
}
