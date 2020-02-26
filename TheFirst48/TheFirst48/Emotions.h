#pragma once
#include "LinkList.h"

class Emotions
{
private:

	LinkList<Emotions*> emotions;
	LinkList<Emotions*>::Iterator iterator;

protected:



public:

	Emotions();
	~Emotions();



};