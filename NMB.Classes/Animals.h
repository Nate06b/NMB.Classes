#pragma once
#include <iostream>

class Animals
{
private:

	std::string m_aniname;
	int m_aniage = 0;

public:

	// accessor methods (getters)
	std::string GetAniName() const  { return m_aniname; }
	int GetAniAge() const { return m_aniage; }


	// mutator methods (setters)
	void GetAniName(const std::string name) { m_aniname = name; }
	void GetAniAge(const float gpa) { m_aniage = gpa; } 

	//"normal" methods
	void const AnimalPrint()
	{
		std::cout << m_aniname << " has a age of " << m_aniage;
	}

};

