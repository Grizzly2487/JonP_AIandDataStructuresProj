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

Suspects::Suspects()
{
}

Suspects::~Suspects()
{
}
