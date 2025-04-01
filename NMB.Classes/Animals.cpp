
#include "Animals.h"
#include "Person.h"

int Animals::s_count = 0;

void Animals::PrintCount()
{
	std::cout << "There are " << s_count << " animals.\n";
}

void Animals::Print() const 
{
	std::cout << GetName() << " has a age of " << GetAge() << " years old!\n";
	if (m_pOwner) std::cout << GetName() << "'s owner is "
		<< m_pOwner->GetName() << ".\n";
	
}
