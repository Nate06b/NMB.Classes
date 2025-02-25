#pragma once
#include <iostream>

class Animals 
{
private:

	std::string m_name;
	int m_age = 0;



public:

	// mutator methods (setters)
	virtual void SetName(const std::string name) { m_name = name; }
	virtual void SetAge(const int age) { m_age = age; }
	
	// accessor methods (getters)
	virtual std::string GetName() const  { return m_name; }
	virtual int GetAge() const { return m_age; }


	// virtua; mean that this CAN be overridden
	//"normal" methods
	virtual void Print() const; 
	// const goes left so if void const then the void is const makes no fucking sence
};

