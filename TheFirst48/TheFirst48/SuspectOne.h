#pragma once
#include "Suspects.h"
class SuspectOne : public Suspects
{
	private:


	protected:


	public:

		virtual Emotions GetEmotion() override;
		virtual Emotions SetEmotion(Emotions changeEmotion) override;

		SuspectOne();
		~SuspectOne();
};

