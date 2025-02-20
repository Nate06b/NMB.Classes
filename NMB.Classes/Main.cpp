
// Classes
// Nathan Beardslee

#include <iostream>
#include <conio.h>

#include "Animals.h"
#include "Student.h"

int main()
{
	Student sam;
	sam.SetName("Sam");
	sam.SetGPA(3.8);
	sam.Print();
	
	// animal class wutg name and age (int) fields
	// Getters and setters
	// display (print) methods
	// then create one in main and print

	Animals fluffy;
	fluffy.GetAniName("fluffy");
	fluffy.GetAniAge(5);
	fluffy.AnimalPrint();


	(void)_getch();
	return 0;
}

