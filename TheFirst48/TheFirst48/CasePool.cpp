#include "CasePool.h"

CasePool* CasePool::GetInstance()
{
	if (instance == NULL)
		instance = new CasePool();

	return instance;
}

CasePool::CasePool()
{
	cases.insert(iterator, new CaseOne());
	cases.insert(iterator, new CaseTwo());
	cases.insert(iterator, new CaseThree());
}

CasePool::~CasePool()
{
}
