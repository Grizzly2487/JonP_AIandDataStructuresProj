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
