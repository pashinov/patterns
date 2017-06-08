#include "product_a.h"

#include <iostream>

product_a::~product_a()
{
	std::cout << "Product A was deleted!" << std::endl;
}

void product_a::print_product_name()
{
	std::cout << "It is product A!" << std::endl;
}
