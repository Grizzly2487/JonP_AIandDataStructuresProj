#include "Suspects.h"

Suspects::Suspects()
{}

Suspects::~Suspects()
{}

void Suspects::ResetSuspect()
{}

void Suspects::SetCurrentCase(Ecase CurCase)
{
	currentCase = CurCase;
}

Ecase Suspects::GetCurrentCase()
{
	return currentCase;
}
