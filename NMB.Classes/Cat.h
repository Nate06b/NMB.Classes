#pragma once

#include "Animals.h"
//Inheritance
class Cat : public Animals
{

public:

	virtual void Climbing()
	{
	std::cout << GetName() << "is climbing a tree.\n";
	}
	// Virtual lets me do this "Overriding"
	virtual void Print() const
	{
		std::cout << "Cat: ";
		Animals::Print();
	}
};