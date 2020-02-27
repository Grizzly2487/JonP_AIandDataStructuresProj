#pragma once
#include "Cases.h"
class CaseOne : public Cases
{
	private:


	protected:


	public:

		//Dialogue
		virtual void CaseDialogue() override;
		virtual void SolvedDialogue()override;

		//Emotion Dialogue
		virtual void NeutralDialogue()override;
		virtual void AnxiousDialogue()override;
		virtual void AngryDialogue()override;
		virtual void SadDialogue()override;
		virtual void ScaredDialogue()override;

		//Suspect Main Dialogue
		virtual void Suspect1Dialogue()override;
		virtual void Suspect2Dialogue()override;
		virtual void Suspect3Dialogue()override;
		virtual void Suspect4Dialogue()override;
		virtual void Suspect5Dialogue()override;
		virtual void Suspect6Dialogue()override;

		//Suspect isLiar Dialogue
		virtual void Suspect1LiarDialogue()override;
		virtual void Suspect2LiarDialogue()override;
		virtual void Suspect3LiarDialogue()override;
		virtual void Suspect4LiarDialogue()override;
		virtual void Suspect5LiarDialogue()override;
		virtual void Suspect6LiarDialogue()override;

		//Suspect Accused and !isLiar Dialogue
		virtual void Suspect1AccusedDialogue()override;
		virtual void Suspect2AccusedDialogue()override;
		virtual void Suspect3AccusedDialogue()override;
		virtual void Suspect4AccusedDialogue()override;
		virtual void Suspect5AccusedDialogue()override;
		virtual void Suspect6AccusedDialogue()override;

		//Suspect Accused and isLiar Dialogue
		virtual void Suspect1LADialogue()override;
		virtual void Suspect2LADialogue()override;
		virtual void Suspect3LADialogue()override;
		virtual void Suspect4LADialogue()override;
		virtual void Suspect5LADialogue()override;
		virtual void Suspect6LADialogue()override;

		//Accused and isKiller Dialogue
		virtual void Suspect1KillerDialogue()override;
		virtual void Suspect2KillerDialogue()override;
		virtual void Suspect3KillerDialogue()override;
		virtual void Suspect4KillerDialogue()override;
		virtual void Suspect5KillerDialogue()override;
		virtual void Suspect6KillerDialogue()override;

		//Accused and !isKiller Dialogue
		virtual void Suspect1NKDialogue()override;
		virtual void Suspect2NKDialogue()override;
		virtual void Suspect3NKDialogue()override;
		virtual void Suspect4NKDialogue()override;
		virtual void Suspect5NKDialogue()override;
		virtual void Suspect6NKDialogue()override;


		CaseOne();
		~CaseOne();

};