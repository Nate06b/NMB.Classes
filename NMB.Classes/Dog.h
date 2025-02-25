#pragma once

#include "Animals.h"
// Inheritance
class Dog : public Animals 
{

private:

	std::string breed = "Mix";

public:

	virtual void DigHole()
	{
		std::cout << GetName() << " is digging.\n";
	}

	virtual void Print() const 
	{
		std::cout << "Dog: ";
		Animals::Print();
	}

};