#include "CasePool.h"

CasePool* CasePool::instance = NULL;

CasePool* CasePool::GetInstance()
{
	if (instance == NULL)
		instance = new CasePool();

	return instance;
}

Cases* CasePool::GetCaseIterator()
{
	return *iterator;
}


CasePool::CasePool()
{
	cases.push_back(new CaseOne());
	cases.push_back(new CaseTwo());
	cases.push_back(new CaseThree());

	iterator = cases.begin();
}

CasePool::~CasePool()
{
}
