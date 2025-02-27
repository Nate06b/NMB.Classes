
// Classes
// Nathan Beardslee

#include <iostream>
#include <conio.h>
#include <vector>

#include "Cat.h"
#include "Dog.h"
#include "Person.h"
	
	// animal class wutg name and age (int) fields
	// Getters and setters
	// display (print) methods
	// then create one in main and print

int main()
{
	// heap (heap means new)
	Animals* pA = new Animals;
	pA->SetName("Lucy");


	// these are all on the stack
	Person sam;
	sam.SetName("Sam");
	sam.SetAge(18);
	sam.Print();

	/*
	Four Pillars 

	Encapsulation -- Putting together properties and methods that are raleted
	Inheritance -- Getting things for free because of a relationship
	Polymorphism -- Treat an object like it's base type
	** Abstration -- We dont need to understand it to use
	
	*/

	// because we have a constructor make all at the same time
	Animals fluffy("Fluffy", 5);
	//fluffy.SetName("fluffy");
	//fluffy.SetAge(5);
	fluffy.Print();

	sam.SetPet(&fluffy);
	
	{
	Dog daisy;
	daisy.SetName("Daisy");
	daisy.DigHole();
	}

	Cat luke;
	luke.SetName("Luke");

	Cat Leia;
	Leia.SetName("Leia");
	Leia.Climbing();
		// this is a vector if pointers to Animals
	std::vector<Animals*> animal;
	animal.push_back(&fluffy);
	//animal.push_back(&daisy);
	animal.push_back(&luke);
	animal.push_back(&Leia);
		// a constent pointer to animals
	for (const Animals* pAnimals : animal)
	{
		pAnimals->Print();
	}

	(void)_getch();
	return 0;
}

