#include "SuspectPool.h"

SuspectPool* SuspectPool::GetInstance()
{
	if (instance == NULL)
		instance = new SuspectPool();

	return instance;
}

SuspectPool::SuspectPool()
{
	suspects.insert(iterator, new SuspectOne());
	suspects.insert(iterator, new SuspectTwo());
	suspects.insert(iterator, new SuspectThree());
	suspects.insert(iterator, new SuspectFour());
	suspects.insert(iterator, new SuspectFive());
	suspects.insert(iterator, new SuspectSix());
}

SuspectPool::~SuspectPool()
{
}
