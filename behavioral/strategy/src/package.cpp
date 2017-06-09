#include "package.h"

#include <iostream>

void plastic_package::pack() const
{
	std::cout << "Pack to plastic" << std::endl;
}

void iron_package::pack() const
{
	std::cout << "Pack to iron" << std::endl;
}
