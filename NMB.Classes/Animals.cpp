
#include "Animals.h"
#include "Person.h"


void Animals::Print() const 
{
	std::cout << GetName() << " has a age of " << GetAge() << " years old!\n";
	if (m_pOwner) std::cout << GetName() << "'s owner is "
		<< m_pOwner->GetName() << ".\n";
	
}
