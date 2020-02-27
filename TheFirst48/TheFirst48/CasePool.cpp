#include "CasePool.h"

CasePool* CasePool::GetInstance()
{
	if (instance == NULL)
		instance = new CasePool();

	return instance;
}

CasePool::CasePool()
{
	
}

CasePool::~CasePool()
{
}
