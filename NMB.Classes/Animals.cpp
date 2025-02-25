
#include "Animals.h"

void Test()
{
	std::cout << "test\n";
}
void Animals::Print() const 
{
	std::cout << GetName() << " has a age of " << GetAge() << " years old!\n";
}
