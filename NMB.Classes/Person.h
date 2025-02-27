#pragma once // header guard
#include <iostream>
#include "Animals.h"


class Person
{	
private:

	//fields (class variables)
	std::string m_name;
	int m_age;
	// member veribles m_
	// when creating a person it points to Animals but can be null
	Animals* m_pPet = nullptr;

public:

	// accessor methods (getters)
	std::string GetName() const { return m_name; } // const method cant change anything in the class for s
	int GetAge() const { return m_age; }
	Animals* GetPet() { return m_pPet; }
								// like {get, set} in C# //
	// mutator methods (setters)
	void SetName(const std::string name) { m_name = name; }
	void SetAge(const int age) { m_age = age; } // use the one thats coming in to set to uptop one
	//void SetGPA(float gpa) { this->gpa = gpa; }// pointer 

	void SetPet(Animals* pPet) { m_pPet = pPet; }


	//"normal" methods
	//void CalculateGPA() { /* do stuff */ }
	
	void const Print()
	{
		//std::cout << GetName(); takes one more step than needed
		std::cout << m_name << " is " << m_age << " years old\n ";
		if (m_pPet) std::cout << m_name
			<< "'s pet is " << m_pPet->GetName() << ".\n";
	}
};
	
//void PrintStudent(const Student& s)
//{
//	std::cout << s.GetName() << " has a gpa of " << s.GetGPA() << "\n";
//}


	




