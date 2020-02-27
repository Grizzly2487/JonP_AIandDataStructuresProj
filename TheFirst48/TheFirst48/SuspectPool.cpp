#include "SuspectPool.h"

SuspectPool* SuspectPool::GetInstance()
{
	if (instance == NULL)
		instance = new SuspectPool();

	return instance;
}

SuspectPool::SuspectPool()
{
}

SuspectPool::~SuspectPool()
{
}
