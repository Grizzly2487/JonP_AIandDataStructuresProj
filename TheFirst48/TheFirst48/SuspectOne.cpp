#include "SuspectOne.h"

Emotions SuspectOne::GetEmotion()
{
	return currentEmotion;
}

Emotions SuspectOne::SetEmotion(Emotions changeEmotion)
{
	currentEmotion = changeEmotion;
	return currentEmotion;
}

SuspectOne::SuspectOne()
{
	
}

SuspectOne::~SuspectOne()
{
}
