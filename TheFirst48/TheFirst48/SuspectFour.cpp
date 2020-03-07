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
	previousEmotion = currentEmotion;
	currentEmotion = changeEmotion;
	return currentEmotion;
}

void SuspectFour::GetPreviousEmotion()
{
	cout << "\t\t\t" << previousEmotion << "\n\n" << endl;
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
	else if (!GetIsLiar())
	{
		NeutralDialogue();
	}
}

void SuspectFour::NeutralDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tI was dancing with Mike.\n\n";
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

void SuspectFour::LiarDialogue()
{
	cout << "\n\n\n";
	cout << "\t\t\tI have no idea whats going on. I'm not supposed to be here, i'm just a pizza delivery guy!\n\n";
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

void SuspectFour::AccusedDialogue()
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

void SuspectFour::AccusedLiarDialogue()
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

void SuspectFour::KillerDialogue()
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

void SuspectFour::NotKillerDialogue()
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