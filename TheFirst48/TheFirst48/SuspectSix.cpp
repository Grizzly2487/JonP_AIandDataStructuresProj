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
	cout << "\t\t\tI have no idea whats going on. I'm not supposed to be here. I'm the pizza delivery guy!\n\n";
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{

	//}
	//else if (currentCase == Ecase::Three)
	//{

	//}
}

void SuspectSix::LiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tI was under a table with mike.\n\n";
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{

	//}
	//else if (currentCase == Ecase::Three)
	//{

	//}
}

void SuspectSix::AccusedDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	SetEmotion(ANGRY);
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	//	SetEmotion(ANGRY);
	//}
	//else if (currentCase == Ecase::Three)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\t HOW DARE YOU  ACCUSE ME!\n\n";
	//	SetEmotion(ANGRY);
	//}
}

void SuspectSix::AccusedLiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	SetEmotion(SCARED);
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	//	SetEmotion(SCARED);
	//}
	//else if (currentCase == Ecase::Three)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\terrrm...uummm..ask ~insert other liar here~\n\n";
	//	SetEmotion(SCARED);
	//}
}

void SuspectSix::KillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	//}
	//else if (currentCase == Ecase::Three)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\tThey deserved it! and i would have gotten away with it if it wasnt for you meddling kids!\n\n";
	//}
}

void SuspectSix::NotKillerDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	//if (currentCase == Ecase::One)
	//{

	//}
	//else if (currentCase == Ecase::Two)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	//}
	//else if (currentCase == Ecase::Three)
	//{
	//	cout << "\n\n\n";
	//	cout << "\t\t\tWHOA WHOA WHOA! I'm innocent!\n\n";
	//}
}
