#pragma once // header guard
#include <iostream>


class Student
{	
private:

	//fields (class variables)
	std::string m_name;
	float m_gpa;
	// member veribles m_

public:

	// accessor methods (getters)
	std::string GetName() const { return m_name; } // const method cant change anything in the class for s
	float GetGPA() const { return m_gpa; }
								// like {get, set} in C# //
	// mutator methods (setters)
	void SetName(const std::string name) { m_name = name; }
	void SetGPA(const float gpa) { m_gpa = gpa; } // use the one thats coming in to set to uptop one
	//void SetGPA(float gpa) { this->gpa = gpa; }// pointer 

	//"normal" methods
	void CalculateGPA() { /* do stuff */ }
	
	void const Print()
	{
		//std::cout << GetName(); takes one more step than needed
		std::cout << m_name << " has a gpa of " << m_gpa;
	}

};
	
//void PrintStudent(const Student& s)
//{
//	std::cout << s.GetName() << " has a gpa of " << s.GetGPA() << "\n";
//}


	




