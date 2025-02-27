#pragma once
#include <iostream>

// forward declaration
class Person;

class Animals 
{
private:

	std::string m_name;
	int m_age = 0;

	Person* m_pOwner = nullptr;


public:
	// if you make any constructor must put down the default now
	// construtors run automatacly

	// constructors
	// if matches Name of class exactly then a constructor
	Animals() {  }

	Animals(std::string name, int age) 
	{ 
		m_name = name;
		m_age = age;
	}
	// destroy
	// destructor same as cunstructor but with a ~
	//~Animals() {  
	//	std::cout << "Goodbay cruel world.";
	//}




	// mutator methods (setters)
	virtual void SetName(const std::string name) { m_name = name; }
	virtual void SetAge(const int age) { m_age = age; }

	virtual void SetOwner(Person* pOwner) { m_pOwner = pOwner; }
	
	// accessor methods (getters)
	virtual std::string GetName() const  { return m_name; }
	virtual int GetAge() const { return m_age; }

	virtual Person* GtOwner() { return m_pOwner; }

	// virtua; mean that this CAN be overridden
	//"normal" methods
	virtual void Print() const; 
	// const goes left so if void const then the void is const makes no fucking sence

};

