#include "SuspectPool.h"

SuspectPool* SuspectPool::instance = NULL;

SuspectPool* SuspectPool::GetInstance()
{
	if (instance == NULL)
		instance = new SuspectPool();

	return instance;
}

Suspects* SuspectPool::GetSuspectIterator()
{
	return *iterator;
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
{

}
