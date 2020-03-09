#include "SuspectPool.h"

SuspectPool* SuspectPool::instance = NULL;

SuspectPool* SuspectPool::GetInstance()
{
	if (instance == NULL)
		instance = new SuspectPool();

	return instance;
}

Suspects* SuspectPool::GetSuspectIterator(bool resetIterator)
{
	if (resetIterator)
	{
		iterator = suspects.begin();
	}
	return *iterator;
}

void SuspectPool::ChooseCulprits()
{
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		iterator = suspects.begin();

		int randomSuspect = rand() % suspects.GetSize() - 1;
		if (randomSuspect < 0)
		{
			randomSuspect = 0;
		}
		iterator += randomSuspect;
		Suspects* chosenSuspect = *iterator;
		chosenSuspect->SetIsLiar(true);
		liarPool[i] = chosenSuspect;
		cArray[i] = randomSuspect;
	}
	int randomLiar = rand() % 2;
	liarPool[randomLiar]->SetIsKiller(true);
}

void SuspectPool::ResetSuspects()
{
	iterator = suspects.begin();
	for (iterator; iterator != suspects.end(); iterator++)
	{
		Suspects* s = *iterator;
		s->ResetSuspect();
	}
	iterator = suspects.begin();
}

unsigned SuspectPool::GetSize()
{
	return suspects.GetSize();
}

void SuspectPool::IncrementIterator()
{
	iterator++;
	if (iterator == suspects.end())
	{
		iterator = suspects.GetRoot();
	}
}
void SuspectPool::DecrementIterator()
{
	iterator--;
	if (iterator == suspects.end())
	{
		iterator = suspects.GetTail();
	}
}
SuspectPool::SuspectPool()
{

	suspects.push_back(new SuspectOne());
	suspects.push_back(new SuspectTwo());
	suspects.push_back(new SuspectThree());
	suspects.push_back(new SuspectFour());
	suspects.push_back(new SuspectFive());
	suspects.push_back(new SuspectSix());

	iterator = suspects.begin();
}

SuspectPool::~SuspectPool()
{}
