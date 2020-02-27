#include "Suspects.h"

Emotions Suspects::GetEmotion()
{
	return currentEmotion;
}

Emotions Suspects::SetEmotion(Emotions changeEmotion)
{
	currentEmotion = changeEmotion;
	return currentEmotion;
}

SuspectList Suspects::SuspectOne()
{
	return SUSONE;
}

SuspectList Suspects::SuspectTwo()
{
	return SUSTWO;
}

SuspectList Suspects::SuspectThree()
{
	return SUSTHREE;
}

SuspectList Suspects::SuspectFour()
{
	return SUSFOUR;
}

SuspectList Suspects::SuspectFive()
{
	return SUSFIVE;
}

SuspectList Suspects::SuspectSix()
{
	return SUSSIX;
}

Suspects::Suspects()
{
}

Suspects::~Suspects()
{
}
