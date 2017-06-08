#include "product_b.h"

#include <iostream>

product_b::~product_b()
{
	std::cout << "Product B was deleted!" << std::endl;
}

void product_b::print_product_name()
{
	std::cout << "It is product B!" << std::endl;
}
